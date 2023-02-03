
C Calc
======

A simple calculator in C

Usage
-----

    > ./calc "1 + 2"
    1 + 2 = 3

Building
--------

Clone this repository and run:

```
make
```

You can execute a few tests for your program by running:

```
make test
```

Assignment
----------

This program is missing the implementation for the `get_result` function. Complete the program so that it runs as desribed above. Note that you may not use the `-` operator directly in `get_result`. Get result must call `subtract`, and subtract must implement subtraction without directly using the `-` operator.

Resources
---------

If this is your first time working with C, this [free C programming book](https://en.wikibooks.org/wiki/C_Programming/Program_flow_control) may be helpful to you. In particular, the chapters on [variables](https://en.wikibooks.org/wiki/C_Programming/Variables), [control flow (if, else, etc)](https://en.wikibooks.org/wiki/C_Programming/Program_flow_control), and [strings](https://en.wikibooks.org/wiki/C_Programming/Arrays_and_strings) may be most directly applicable.
