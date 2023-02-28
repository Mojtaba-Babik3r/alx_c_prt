# Learn Programming with c Roadmap

## Introduction

This is a roadmap for learning programming with c. It is a work in progress and will be updated as I learn more.

   ------------------------------------------Attintion please !-------------------------------------------
   | any one who complete any of the tasks below please update with your initial letters beside the task |
   | asimsharf =      AS                                                                                |
   | MohammedSaeed92 =  MS                                                                                |
   | mojtabababiker = MB                                                                                |
   -------------------------------------------------------------------------------------------------------
## Roadmap

### 1. Introduction to Programming with c

# C Programming Language Basics

## Introduction

This is a roadmap for learning programming with c. It is a work in progress and will be updated as I learn more.

- Getting Started         | MS
- Hello World             | MS
- Variables               | MS
- Data Types              | MS
- Operators               | MS
- Expressions             | MS
- Statements              | MS
- Comments                | MS
- Functions               | MS
- Arrays                  | MS
- Strings                 | MS
- Pointers                | MS
- Structures              | MS
- Unions
- Enumerations
- Input and Output
- Preprocessor
- Error Handling
- Type Casting
- Storage Classes
- Bitwise Operators
- File Handling           | MS
- Recursion
- Memory Management
- Command Line Arguments
- Data Structures
- Sorting
- Searching
- Linked Lists
- Stacks
- Queues
- Trees
- Graphs
- Dynamic Programming
- Miscellaneous
- Advanced
- References

## Getting Started

C is a general-purpose, procedural, imperative computer programming language developed in 1972 by Dennis M. Ritchie at the Bell Telephone Laboratories to develop the UNIX operating system. C is the most widely used computer language. It keeps fluctuating at number one scale of popularity along with Java programming language, which is also equally popular and most widely used among modern software programmers.

C was initially developed as a system programming language to write operating system. The main features of C language include low-level access to memory, a simple set of keywords, and clean style, these features make C language suitable for system programmings like operating system or compiler development. C language is a combination of both high-level and low-level language features. The language provides all the features of a high-level language like variable declarations and easy readability but also provides many features of low-level language like direct memory access. The language is portable and is widely used to develop system applications that require faster execution.

C programming is fast, structured, procedural language with a rich set of operators and data types. C programming is a middle-level language, as it comprises both high-level and low-level language features. The language was developed to write an operating system called UNIX. C is the most widely used computer language. It keeps fluctuating at number one scale of popularity along with Java programming language, which is also equally popular and most widely used among modern software programmers.

C was initially developed as a system programming language to write an operating system. The main features of C language include low-level access to memory, a simple set of keywords, and clean style, these features make C language suitable for system programmings like operating system or compiler development. C language is a combination of both high-level and low-level language features. The language provides all the features of a high-level language like variable declarations and easy readability but also provides many features of low-level language like direct memory access. The language is portable and is widely used to develop system applications that require faster execution.

C programming is fast, structured, procedural language with a rich set of operators and data types. C programming is a middle-level language, as it comprises both high-level and low-level language features. The language was developed to write an operating system called UNIX.

## Hello World

```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

## Variables

```c
#include <stdio.h>

int main() {
    int a, b;
    int c;
    float f;

    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0/3.0;
    printf("value of f : %f \n", f);

    return 0;
}
```

## Data Types

```c
#include <stdio.h>

void main() {
    char grade = 'B';
    int age = 25;
    float salary = 2645.78;
    printf("Grade = %c \n", grade);
    printf("Age = %d \n", age);
    printf("Salary = %f \n", salary);
}

```

## Operators

```c
#include <stdio.h>

int main() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c );
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c );
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c );
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c );
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c );
    c = a++;
    printf("Line 6 - c 的值是 %d\n", c );
    c = a--;
    printf("Line 7 - c 的值是 %d\n", c );

    return 0;
}
```

## Expressions

```c
#include <stdio.h>

int main() {
    int a = 21;
    int b = 10;
    int c;

    if( a == b ) {
        printf("Line 1 - a 等于 b\n" );
    } else {
        printf("Line 1 - a 不等于 b\n" );
    }
    if ( a < b ) {
        printf("Line 2 - a 小于 b\n" );
    } else {
        printf("Line 2 - a 不小于 b\n" );
    }
    if ( a > b ) {
        printf("Line 3 - a 大于 b\n" );
    } else {
        printf("Line 3 - a 不大于 b\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b ) {
        printf("Line 4 - a 小于或等于 b\n" );
    }
    if ( b >= a ) {
        printf("Line 5 - b 大于或等于 a\n" );
    }

    return 0;
}
```

## Statements

```c
#include <stdio.h>

int main() {
    int a = 10;

    /* while loop execution */
    while( a < 20 ) {
        printf("value of a: %d\n", a);
        a++;
    }

    return 0;
}
```

## Comments

```c

#include <stdio.h>

int main() {
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");

    return 0;
}
```

## Arrays

```c
#include <stdio.h>

int main() {
    int n[ 10 ]; /* n 是一个包含 10 个整数的数组 */
    int i,j;

    /* 初始化数组元素 */
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = i + 100; /* 设置元素 i 为 i + 100 */
    }

    /* 输出数组中每个元素的值 */
    for (j = 0; j < 10; j++ ) {
        printf("Element[%d] = %d\n", j, n[j] );
    }

    return 0;
}
```

## Pointers

```c

#include <stdio.h>

int main () {

   int  var = 20;   /* 实际变量的声明 */
   int  *ip;        /* 指针变量的声明 */

   ip = &var;  /* 在指针变量中存储 var 的地址 */

   printf("Address of var variable: %x\n", &var  );

   /* 在指针变量中存储的地址 */
   printf("Address stored in ip variable: %x\n", ip );

   /* 使用指针访问值 */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
```


## Functions

```c    
#include <stdio.h>

/* 函数声明 */
int max(int num1, int num2);

int main () {

   /* 局部变量定义 */
   int a = 100;
   int b = 200;
   int ret;

   /* 调用函数来获取最大值 */
   ret = max(a, b);

   printf( "Max value is : %d\n", ret );

   return 0;
}

/* 函数返回两个数中较大的那个数 */

int max(int num1, int num2) {

   /* 局部变量声明 */
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}
```

## Structures

```c

#include <stdio.h>

struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

/* 函数声明 */

void printBook( struct Books book );

int main( ) {

    struct Books Book1;        /* 声明 Book1，类型为 Book */
    struct Books Book2;        /* 声明 Book2，类型为 Book */

    /* Book1 详述 */
    strcpy( Book1.title, "C 教程");
    strcpy( Book1.author, "Runoob"); 
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 6495407;

    /* Book2 详述 */
    strcpy( Book2.title, "CSS 教程");
    strcpy( Book2.author, "Runoob");
    strcpy( Book2.subject, "前端技术");
    Book2.book_id = 6495700;

    /* 输出 Book1 信息 */
    printBook( Book1 );

    /* 输出 Book2 信息 */
    printBook( Book2 );

    return 0;
}

void printBook( struct Books book ) {

    printf( "书标题 : %s\n", book.title);
    printf( "书作者 : %s\n", book.author);
    printf( "书类目 : %s\n", book.subject);
    printf( "书 ID : %d\n", book.book_id);
}
```

## Unions

```c

#include <stdio.h>

#include <string.h>

union Data {
   int i;
   float f;
   char  str[20];
};

int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}
```

## Enumerations

```c

#include <stdio.h>

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main() {
    enum week day;
    day = Wed;
    printf("%d", day+1);
    return 0;
}
```

## Typedef

```c

#include <stdio.h>

typedef unsigned char BYTE;

int main() {
    BYTE b1, b2;
    b1 = 'A';
    b2 = 'B';
    printf("%c %c", b1, b2);
    return 0;
}
```

## Preprocessor

```c

#include <stdio.h>

#define TRUE 1

#define FALSE 0

#define PI 3.14159

int main() {
    int area;
    area = PI * 5 * 5;
    printf("%d", area);
    return 0;
}
```

## Input and Output

```c

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a value :");
    scanf("%s %d", str, &i);
    printf("\nYou entered: %s %d ", str, i);
    return 0;
}
```

## File I/O

```c

#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt" , "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   
   return(0);
}
```

## Memory Allocation

```c

#include <stdio.h>

#include <stdlib.h>

int main () {
   int i,n;
   int *ptr;
   int sum=0;

   printf("Enter number of elements: ");
   scanf("%d",&n);

   ptr = (int*) malloc(n * sizeof(int));  // memory allocated using malloc
   if(ptr == NULL)                     
   {
       printf("Error! memory not allocated.");
       exit(0);
   }

   printf("Enter elements of array: ");
   for(i=0; i<n; ++i)
   {
       scanf("%d",ptr + i);
       sum += *(ptr + i);
   }

   printf("Sum = %d",sum);
   free(ptr);
   return 0;
}
```

## Command Line Arguments

```c

#include <stdio.h>

int main( int argc, char *argv[] ) {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
```

## Pointers

```c

#include <stdio.h>

int main () {

   int  var = 20;   /* 实际变量的声明 */
   int  *ip;        /* 指针变量的声明 */

   ip = &var;  /* 在指针变量中存储 var 的地址 */

   printf("Address of var variable: %x\n", &var  );

   /* 在指针变量中存储的地址 */
   printf("Address stored in ip variable: %x\n", ip );

   /* 使用指针访问值 */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
```

## Dynamic Memory Allocation

```c

#include <stdio.h>

#include <stdlib.h>

int main () {

   int i,n;
   int *ptr;
   int sum=0;

   printf("Enter number of elements: ");
   scanf("%d",&n);

   ptr = (int*) malloc(n * sizeof(int));  // memory allocated using malloc
   if(ptr == NULL)                     
   {
       printf("Error! memory not allocated.");
       exit(0);
   }

   printf("Enter elements of array: ");
   for(i=0; i<n; ++i)
   {
       scanf("%d",ptr + i);
       sum += *(ptr + i);
   }

   printf("Sum = %d",sum);
   free(ptr);
   return 0;
}
```

## Structures

```c

#include <stdio.h>

#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* 函数声明 */

void printBook( struct Books book );

int main( ) {

    struct Books Book1;        /* 声明 Book1，类型为 Books */
    struct Books Book2;        /* 声明 Book2，类型为 Books */

    /* Book1 详述 */
    strcpy( Book1.title, "C 教程");
    strcpy( Book1.author, "RUNOOB"); 
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 6495407;

    /* Book2 详述 */
    strcpy( Book2.title, "CSS 教程");
    strcpy( Book2.author, "RUNOOB");
    strcpy( Book2.subject, "前端技术");
    Book2.book_id = 6495700;

    /* 输出 Book1 信息 */
    printBook( Book1 );

    /* 输出 Book2 信息 */
    printBook( Book2 );

    return 0;
}

void printBook( struct Books book ) {

   printf( "书标题 : %s\n", book.title);
   printf( "书作者 : %s\n", book.author);
   printf( "书类目 : %s\n", book.subject);
   printf( "书 ID : %d\n", book.book_id);
}
```

## Unions

```c
