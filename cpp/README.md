# get started

## hello world

### install the compiler

### compile the code

For hello.cpp, on Mac

```
g++ -o hello hello.cpp
```

Then you can run the code if no error

```
./hello
```
### notes


This hello.cpp shows how a simple program is structured. It uses the library. It has statements (a task), expressions (evaluated to values) and function (a collection of statements). Main function is mandatory. 

```#include``` is a preprocessor directive. It means for the compiler.

## functions

When you have separate files, you could organize them into separate files in different folders. Using a Makefile may be a good idea.

```
g++ -o test -I ./ main.cpp add.cpp
```
The above will do for just handful files.
 
