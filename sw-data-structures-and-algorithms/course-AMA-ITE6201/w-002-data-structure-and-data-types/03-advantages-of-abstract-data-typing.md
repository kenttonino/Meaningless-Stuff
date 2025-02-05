## Advantages of Abstract Data Typing

| (1) Encapsulation |
| ----------------- |
| Abstraction provides a promise that any implementation of the <br /> ADT has certain properties and abilities; knowing these <br /> is all that is required to make use of an ADT object. |
| The user does not need any technical knowledge of how the <br /> implementation works to use the ADT. |
| In this way, the implementation may be complex but will be <br /> encapsulated in a simple interface when it is actually used. |

<br />

| (2) Localization of Change |
| -------------------------- |
| Code that uses an ADT object will not need to be edited if <br /> the implementation of the ADT is changed. |
| Since any changes to the implementation must still comply <br /> with the interface, and since code using an ADT <br /> may only refer to properties and abilities specified <br /> in the interface, changes maybe made to the implementation without <br /> requiring any changes in code where the ADT is used. |

<br />

| (3) Flexibility |
| --------------- |
| Different implementations of an ADT, having all the same <br /> properties and abilities, are equivalent and may be <br /> used somewhat interchangeably in code that uses the ADT. |
| This gives a great deal of flexibility when using ADT <br /> objects in different situations. |
| For example, different implementations of an ADT may be <br /> more efficient in different situations; it is possible <br /> to use each in the situation where they are preferable, <br /> thus increasing overall efficiency. |

<br />

| Common Useful ADTs |  |
| ------------------ | - |
| `List` | A list of images that needs to be exported into a CD <br /> by an imaging application. |
| `Priority Queue` | An application of this is the Dijkstra's <br /> Shortest path algorithm. |
| `Queue` | An application of this is when a resource is shared <br /> among multiple processes, a scheduling occurs thus, creating <br /> a queue of processes that will use the said resource. |
| `Stack` | An application of this is by reversing a word. Pushing <br /> the word letter-by-letter into the stack - and then <br /> pop the letters from the stack. |
| `Tree` | An application of a Tree is the T9 feature of the <br /> cellphone. A number corresponds to a set of letters. |
