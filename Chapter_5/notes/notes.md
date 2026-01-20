# 5 - Selection Statements 

- C has three types of statements:
    - **Selection statements**. `if` and `switch` give a set of alternatives to a command
    - **Iteration statements**. `while`, `do` and `for` perform loop iterations
    - **Jump statements**. `break`, `continue`, `goto` and `return` cause an unconditional jump

## 5.1 Logical Expressions

- For a some C statements work, they must test a relational expressional to see if its "true" or "false"
- The expression such as `i < j` is either `1 (true)` or `0 (false)`

### Relational Operators

| symbol | meaning
| :--- | :--- 
| < | less than
| > | greater than
| <= | less than or equal to
| >= | greater than or equal to

- these operators can be used to compare *integers*, *floats* and mixed types allowed
- `i + j < k - 1` means `(i + j) < (k - 1)`, 
    - relational operators are lower than arithmetic operators in precedence 

### Equality Operators

| symbol | meaning
| :--- | :---
| == | equal to 
| != | not equal to 

- these operators can be used to compare equality and have lower precedence than relational operators
- `i < j == j < k` means `(i < j) == (j < k)`

### Logical Operators 

| symbol | meaning
| :--- | :---
| ! | logical negation
| && | logical *and*
| \|\| |logical *or*

- `!` operator is unary and `&& and ||` are binary
    -  `!expr` has the value 1 if `expr` has the value 0
    - `expr1 && expr2` has the value 1 if neither values are 0
    - `expr1 || expr2` has the value 1 if one or both values are 1
- if the first expression is already false, then the operators don't evaluate the next expression, this is called `short-circuit`

## 5.2 The `if` statement