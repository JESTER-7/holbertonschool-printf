# PRINTF FUNCTION  
## Plan
#### 1 - Description
#### 2 - The compilation
#### 3 - Requirements
#### 4 - Exemples
#### 5 - Man page
#### 6 - Flowchart

## **Description**
The printf project ask us to recreate the printf function, in particular these conversion specifiers :
* `%c`: Print a char
* `%s`: Print a string
* `%d`: Print an integer
* `%i`: Print an integer base 10
* `%%`: Print %
We also do a man page, we will see it later int the readme. 

## **Compilation command**
The program will be compiled with this function :
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
```
## **Requirements**
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc
* Your code should use the Betty style.
* You are not allowed to use global variables
* No more than 5 functions per file (the reason of the 2 slach files)

## **Exemples**
Here we can see the printf function print a string :
```#include <main.h>
/**
* main - printf Exemples
* Return: 0
*/
int main (void)
{
    i = 78;
    _printf("%d", i);
    Return (0);
}
stdout: 78```

#### *Authors*
Korneel Loy - Arthur Urbano
