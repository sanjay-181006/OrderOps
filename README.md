# OrderOps

A **multi-operand calculator written in C** that evaluates arithmetic expressions using **arrays and switchcase logic**, correctly handling **operator precedence** (`*`, `/` before `+`, `-`) **without using stacks or recursion**.

---

## Features

* Supports **multiple operands** (up to 100)
* Handles **operator precedence** correctly
* Uses **arrays** for operands and operators
* Implements logic using **`switch` statements**
* Includes **input validation** and **division by zero checks**
* No stacks, no recursion; pure array manipulation

---

## How It Works (Core Idea)

1. All operands are stored in a `float` array.
2. All operators are stored in a `char` array.
3. The program first scans for `*` and `/` operators:

   * Performs the operation
   * Stores the result in place
   * Shifts arrays left to remove used operands/operators
4. After resolving `*` and `/`, the remaining `+` and `-` operations are evaluated left to right.

This mimics how real calculators respect the **order of operations**.

---

## Sample Run

```
Enter number of operands (max 100): 4
Enter operand 1: 10
Enter operand 2: 2
Enter operand 3: 3
Enter operand 4: 4
Enter operator 1 (+, -, *, /): +
Enter operator 2 (+, -, *, /): *
Enter operator 3 (+, -, *, /): -

Result = 12.00
```

Expression evaluated:

```
10 + 2 * 3 - 4
```

---

## Compilation & Execution

```bash
gcc calculator.c -o calculator
./calculator
```

---

## File Structure

```
OrderOps/
│── calculator.c
│── README.md
```

---

## Learning Outcomes

* Array manipulation in C
* Operator precedence handling
* Safe input handling
* Switchcase control flow
* Inplace data reduction techniques

---

## Possible Improvements

* Accept full expressions like `3+4*5` as input
* Add support for parentheses
* Improve floating point precision handling
* Refactor into modular functions

---

This project is open for learning and educational use.
