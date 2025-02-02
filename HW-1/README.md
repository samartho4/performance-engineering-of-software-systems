# ANSWERS
## WRITEUP 2
What is the type of argv? 

- Although the comment says “It is of type 'char',” that is not quite accurate. The declaration
char* argv[] means that argv is an array of pointers to char. When passed to the function, it “decays” into a pointer to its first element; that is, it has type char** (a pointer to a pointer to char).

What does printf("char d = %c\n", d); print?
- The array c is initialized as "6.172". The pointer pc is set to c (i.e. to &c[0]), so *pc is the first character '6'. Therefore, the printf prints:
char d = 6

Why is this assignment valid? 
- The variable pcp is declared as char** pcp; and argv (after decay) is also of type char** (pointer to pointer to char). Since both have the same type, the assignment is valid.

What is the type of pcc2? 
-It is a constant pointer to char.

Why is the assignment *pcc = '7'; invalid?
- The pointer pcc is declared as const char* pcc, meaning it points to constant characters. Attempting to change the character via *pcc violates that constancy.

pcc = *pcp; Valid? 
- Because the pointer to the value can change.

pcc = argv[0]; Valid? 
- Because argv[0] is a pointer as well.

cp = *pcp; Invalid? 
Because cp is a const pointer and not a double pointer to char.

- cp = *argv; Invalid? 
- Same

*cp = '!'; Valid? 
- Because only the pointer needs to remain constant.

cpc = *pcp; Invalid? 
- Because nothing can be altered after declaration.

cpc = argv[0]; Invalid? 
- Because nothing can be altered after declaration.

*cpc = '@'; Invalid? 
- Same


## WRITEUP 3
cc     sizes.c   -o sizes
size of int : 4 bytes 
size of int* : 8 bytes 
size of short : 2 bytes 
size of short* : 8 bytes 
size of long : 8 bytes 
size of long* : 8 bytes 
size of char : 1 bytes 
size of char* : 8 bytes 
size of float : 4 bytes 
size of float* : 8 bytes 
size of double : 8 bytes 
size of double* : 8 bytes 
size of unsigned int : 4 bytes 
size of unsigned int* : 8 bytes 
size of long long : 8 bytes 
size of long long* : 8 bytes 
size of int8_t : 1 bytes 
size of int8_t* : 8 bytes 
size of int16_t : 2 bytes 
size of int16_t* : 8 bytes 
size of int32_t : 4 bytes 
size of int32_t* : 8 bytes 
size of int64_t : 8 bytes 
size of int64_t* : 8 bytes 
size of int_fast8_t : 1 bytes 
size of int_fast8_t* : 8 bytes 
size of int_fast16_t : 2 bytes 
size of int_fast16_t* : 8 bytes 
size of int_fast32_t : 4 bytes 
size of int_fast32_t* : 8 bytes 
size of int_fast64_t : 8 bytes 
size of int_fast64_t* : 8 bytes 
size of uint8_t : 1 bytes 
size of uint8_t* : 8 bytes 
size of uint16_t : 2 bytes 
size of uint16_t* : 8 bytes 
size of uint32_t : 4 bytes 
size of uint32_t* : 8 bytes 
size of uint64_t : 8 bytes 
size of uint64_t* : 8 bytes 
size of uint_fast8_t : 1 bytes 
size of uint_fast8_t* : 8 bytes 
size of uint_fast16_t : 2 bytes 
size of uint_fast16_t* : 8 bytes 
size of uint_fast32_t : 4 bytes 
size of uint_fast32_t* : 8 bytes 
size of uint_fast64_t : 8 bytes 
size of uint_fast64_t* : 8 bytes 
size of student : 8 bytes 
size of student* : 8 bytes 
size of int array 4 : 20 bytes 


## WRITEUP 5
When compiled with -O1, the binary is 9kB. When compiled with -O2 and -O3 it is 13kB.


## WRITEUP 6
It takes 1us to run the script, which is a tiny bit longer than before. There seems to be an overflow on all of the results. Otherwise, there is no output from AddressSanitizer as we would expect it, so no memory leak?


## WRITEUP 7:
Matrix A: 
------------
    7      9      3      8  
    0      2      4      8  
    3      9      0      5  
    2      2      7      3  
------------
Matrix B: 
------------
    7      9      0      2  
    3      9      9      7  
    0      3      9      8  
    6      5      7      6  
------------
Matrix C: 
------------
    0      0      0      0  
    0      0      0      0  
    0      0      0      0  
    0      0      0      0  
------------
---- RESULTS ----
Result: 
------------
  124    193    164    149  
   54     70    110     94  
   78    133    116     99  
   38     72    102     92  
------------
---- END RESULTS ----
Elapsed execution time: 0.000000 sec


## WRITEUP 8:
No Valgrind available on MacOS10.14


## EXTRA: CODE COVERAGE:
Compile the makefile with clang --coverage.
Commands:
make clean
make DEBUG=1
./matrix_multiply -p
gcov matrix_multiply.c	


## WRITEUP 9:
1000x1000 matrix takes:
8.803739 sec (naive)
0.892479 sec (loops reversed)

## WRITEUP 10:
using RELEASE:
4.137507 sec (-O0)

using DEBUG
4.821751 sec (-O0)
0.861524 sec (-O3)
