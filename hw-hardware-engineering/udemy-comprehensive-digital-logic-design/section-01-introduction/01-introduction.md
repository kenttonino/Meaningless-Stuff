## Digital Logic Design

<br />

`Digital CIrcuit`

> - Electronic circuit built by interconnection of components (`Logic Gates`).

> - `Logic Gate` is an electronic device used to implement a logic operation <br />
    (AND, OR, NOT).

> - Primitive gates.

> - Other gates: `NAND`, `NOR`, `XOR`, `XNOR`.

<br />
<br />

`Digital Logic Design`

> - Process in which functional design of a digital circuit is represented <br />
    in terms of logic operations.

<br />
<br />
<br />



## Digital vs. Analog

<br />

`Analog Systems`

> - Process information having continuous values.

> - Represented using a time-varying quantity such as voltage.

> - Examples: audio recordings and playback, older video signal technologies <br />
    (such as VGA, S-video, etc.).

<br />
<br >

`Digital Systems`

> - Manipulate information having discrete or discontinuous values.

> - Represented using discrete set of values.

> - Example: ON/OFF switch, audio recording from microphone, etc.

<br />
<br />
<br />


## Representation of Discrete information

> - Discrete elements of information are represented in digital systems <br />
    by combinations of binary values (`High (1)` or `Low (0)`).

> - Binary values represented in Digital systems with physical <br />
    quantities (`Binary Signals`).

> - Examples: voltage signal.

> - Signal has only two discrete values - `High (5V)` & `Low (0V)`.

<br />
<br />
<br />



## Two Types of Logic Levels

(1) `ACTIVE HIGH`

> - `TRUE` or `1` generally associated with `H` ( $RST$ ) .

> - The signal will be performing its function when its <br />
    logic level is `1`.

> - Here `5V` represents a digital `1`, and `OV` represents <br />
    a digital `O`.

<br />
<br />

(2) `ACTIVE LOW`

> - `TRUE` or `1` generally associated with `L` ( $\overline{RST}$ )

> - The signal will be performing its function when the <br />
    signal is `0`.

> - Here `5V` represents a digital `0`, and `0V` represents <br />
    a digital `1`.

<br />
<br />

| Example: `74LS173` |
| ------------------ |
| ![01-74LS173](./images/01-74LS173.png) |
| The `ACTIVE HIGH` logic signals are `Q0`, `Q1`, `Q2`, `Q3`, `CLK`, <br /> `GND`, `VCC`, `CLR`, `D0`, `D1`, `D2`, and `D3`. If you provide <br /> `5V` to them they will perform there functionality, if you  <br /> provide `0V` to them they won't perform there functinality. |
| The `ACTIVE LOW` logic signals are `E2`, `E1`, `OE1`, and `OE2`. <br /> They will perform there functionality if there value is `0V`. |
