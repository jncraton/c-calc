
C Calc
======

A simple calculator in C

Learning Outcomes
-----------------

After completing this lab, students will be able to:

1. Invoke make and gcc to build software
2. Implement simple functions in C
3. Use integer types for math operations in [two's complement](https://en.wikipedia.org/wiki/Two%27s_complement)

Usage
-----

    > ./calc "1 + 2"
    1 + 2 = 3

Tasks
-----

1. Complete the `subtract` function without using the `-` operator
2. Complete the `get_result` function with using the `-` operator (call `subtract` instead)

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

Resources
---------

If this is your first time working with C, this [free C programming book](https://en.wikibooks.org/wiki/C_Programming/Program_flow_control) may be helpful to you. In particular, the chapters on [variables](https://en.wikibooks.org/wiki/C_Programming/Variables), [control flow (if, else, etc)](https://en.wikibooks.org/wiki/C_Programming/Program_flow_control), and [strings](https://en.wikibooks.org/wiki/C_Programming/Arrays_and_strings) may be most directly applicable.
