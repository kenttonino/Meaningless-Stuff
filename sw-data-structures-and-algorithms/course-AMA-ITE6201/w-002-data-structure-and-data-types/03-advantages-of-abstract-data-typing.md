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
