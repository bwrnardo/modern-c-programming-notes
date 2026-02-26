# 8 - Arrays

- **scalar** variables hold only one single data item
- **aggregate** variables can store collections of values
    - one dimensional and multidimensional arrays

## 8.1 - One-Dimensional Arrays

- An array is a data structure containing a number of values, which can be only the same type, know as **elements**
- These elements can be any type, and to declare you must say its length:

```C
#define N 10

int a[10]; 
int a[N]; // same thing
```

- the arrays are number starting from 0 to n-1. example:

![array](images/image.png)

- Expressions of the form `a[i]` are lvalues, so they can be used as ordinary variables

```C
a[0] = 1;
printf("%d\n", a[5]);
++a[i];
```

- `for` loops are useful to operate in every element of the array

![for loops](images/${transactionalFormat})

- An array can be any integer expression:

```C
a[i+j*10] = 0;
```

![reverse.c](images/${transactionalFormat}-1)

- To initialize an array, they must beenclosed in braces and separated by commas

```C
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

- if the initializer is shorter than the array, the remaining elements will be set to 0
- using `int a[10] = {0};` you can initialize every element to 0
- you can ommit the length when using initializers, if there is a length you cant initialize values longer than the length of the array
- the length ommited will be fixed to the numbers of values initialized

### Designated Initializers
 
- in C99, to initialize certain elements of the array while initializing others to 0, you can use this form:

```C
int a[15] = {[2] = 29, [9] = 7, [14] = 48};
```

- Each number in brackets is said to be a *designator*
- The order doesn't matter
- The designated initializers can be mixed with the normal form 

```C
int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};
```

### Using the `sizeof` Operator with Arrays

- The `sizeof` operator can determine the size of an array in bytes
- So to mesure the size of an array element, dividing the array size by the element size gives the length of the array
    - `sizeof(a) / sizeof(a[0])`
- using this method to compare may cause warning in compilers
- to avoid that, it can be casted into `(int)`
    - `(int) sizeof(a) / sizeof(a[0])`

![interest.c](images/image)

## 8.2 - Multidimensional Arrays

- An array can have any number of dimensions
- An 2D matrix has the form:
    - `int m[5][9];` 5 rows and 9 columns
- C stores arrays in **row-major order**
    - ![row major order](images/image-1.png)

- Usually, nested `for` loops are used to visit each element in a 2d array

```C
#define N 10

double ident[N][N];
int row, col;

for (row = 0; row < N; row++)
    for (col = 0; col < N; col++)
        if (row == col)
            ident[row][col] = 1.0;
        else
            ident[row][col] = 0.0;
```

### Initiliazing Multidimensional Array

- Usually by nesting curly braces and inserting values inside
    - ![Initializing 2D array](images/image-2.png)

- Ommiting the inner braces may cause compiler warnings or errors
- If isnt large enough, the rest will be initialized to 0
- in C99, *designated initializers* work for 2D arrays 


![deal.c](images/image-3.png)

## 8.3 - Variable-Length Arrays (C99)

- Its possible to use non-constant variables in C99 to declare the length of an array

![reverse2.c](images/image-4.png)