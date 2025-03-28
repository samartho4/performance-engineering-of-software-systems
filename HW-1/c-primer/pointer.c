// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char* argv[]) {  // What is the type of argv? It is of type 'char'.
  int i = 5;
  // The & operator here gets the address of i and stores it into pi

  int* pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  int j = *pi;

  char c[] = "6.172";
  char* pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // What does this print? The first value of c, "6".

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char** pcp;
  pcp = argv;  // Why is this assignment valid? Because both are pointers.

  const char* pcc = c;  // pcc is a pointer to char constant
  char const* pcc2 = c;  // What is the type of pcc2? It is a constant pointer to a char.

  // // For each of the following, why is the assignment:
  // *pcc = '7';  // invalid? Because this is read-only variable (a constant) and not assignable.
  pcc = *pcp;  // valid? Because the pointer to the value can change.
  pcc = argv[0];  // valid? Because argv[0] is a pointer as well.

  char* const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  // cp = *pcp;  // invalid? Because cp is a const pointer and not a double pointer to char.
  // cp = *argv;  // invalid? Same here.
  *cp = '!';  // valid? Because only the pointer needs to remain constant.

  const char* const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  // cpc = *pcp;  // invalid? Because nothing can be altered after declaration.
  // cpc = argv[0];  // invalid? Because nothing can be altered after declaration.
  // *cpc = '@';  // invalid? Because nothing can be altered after declaration.

  return 0;
}