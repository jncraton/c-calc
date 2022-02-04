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
