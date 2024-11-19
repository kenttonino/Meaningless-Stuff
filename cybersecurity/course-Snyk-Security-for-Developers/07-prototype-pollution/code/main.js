const lodash = require('lodash');
const payload = '{"constructor": {"prototype": {"a0": true}}}'


// This is for version <= 4.17.11.
function lodashVulnerability() {
  console.log("\n");
  console.log("----- LODASH VULNERABILITY -----")
  lodash.defaultsDeep({}, JSON.parse(payload));
  if (({})[`a0`] === true) {
    console.log(`Vulnerable to Prototype Pollution via ${payload}`);
  }
}

// Try to update the __proto__.
function updateProto() {
  console.log("\n");
  console.log("----- UPDATE PROTO -----")
  __proto__.test = "Test 2."
  console.log("Proto: ", __proto__)
}

// Check the type of object.
function typeOfObject() {
  console.log("\n");
  console.log("----- TYPEOF OBJECT -----")
  const testObject = {};
  console.log("Typeof Proto: ", typeof testObject.__proto__)
}

// Create a prototype function.
function prototypeFunction() {
  console.log("\n");
  console.log("----- PROTOTYPE FUNCTION -----")
  const testObject = {};

  // Create a testFunction.
  testObject.__proto__.testFunction = () => {
    console.log("Hello from testFunction.")
  }

  // Call the testFunction.
  testObject.testFunction();
}

// Shared prototype.
function sharedPrototype() {
  console.log("\n");
  console.log("----- SHARE PROTOTYPE -----")
  const testA = {};
  const testB = new Object();
  const testC = {};

  if (testA.__proto__ === testB.__proto__) {
    console.log("A & B Equality: ", true);
  }

  if (testA.__proto__ === testB.__proto__ && testB.__proto__ === testC.__proto__) {
    console.log("A & B Equality: ", true)
    console.log("A & C Equality: ", true)
  }
}

// Shared attributes.
function sharedAttributesPrototype() {
  console.log("\n");
  console.log("----- SHARE ATTRIBUTES PROTOTYPE -----")
  const testA = {};
  const testB = new Object();

  // Add attributes for testA.
  testA.__proto__.name = "Attributes Name";

  console.log(testB.__proto__);
}


// Safe merge two or more objects.
function lodashMerge() {
  console.log("\n");
  console.log("----- LODASH MERGE -----")
  console.log(
    lodash.merge(
      { cpp: "12" },
      { java: "23" },
      { python: "35" })
  );
}

// Create an object without the prototype.
function objectCreate() {
  // Test 1.
  console.log("\n");
  console.log("----- OBJECT CREATE -----")
  const objectA = Object.create(null);
  console.log("Object A Test 1: ", objectA)

  // Test 2.
  lodash.merge(objectA, { "id": "1", "name": "test1"})
  console.log("Object A Test 2: ", objectA)

  // Test 3.
  lodash.merge(objectA, { "ID": "1", "name": { "__proto__": "This is a hack." } });
  console.log("Object A Test 3: ", objectA.name.__proto__);
}

// Freezing the object prototype.
function objectFreeze() {
  console.log("\n");
  console.log("----- OBJECT FREEZE -----")
  Object.freeze(Object.prototype)

  const object1 = new Object({});

  // Test 2.
  lodash.merge(object1, { "id": "1", "name": "test1"})
  console.log("Object 1 Test 2: ", object1)

  // Test 3.
  lodash.merge(object1, { "ID": "1", "name": { "__proto__": "This is a hack." } });
  console.log("Object 1 Test 3: ", object1.name.__proto__);
}


// Function calls.
lodashVulnerability();
updateProto();
typeOfObject();
prototypeFunction();
sharedPrototype();
sharedAttributesPrototype();
lodashMerge();
objectCreate();
objectFreeze();
