# Requirements
## Introduction
  * Mathematical operations are a part of our daily lives. The major application lies in the software industry such as development of algorithms like path finder algorithms, image processing algorithms and many more. Also there are subjects in Academics where there are some complex matrix to verify the wheather the solve matrices are correct this application can be used.
  * In this project, some of the basic matrix operations are presented where a user can select the operation to be performed on the square matrices only. Then the matrices with their size are entered.

## Research

### Objective
The main objective of this project is to perform operation on square matrices. The operations performed on a pair of square matrices are, addition, subtraction and multiplication. The operations performed on a single square matrix are, determinant of matrices and Transpose of matrices. 

### Benefits

A user who is working on a laptop or a desktop who would be working on matrix based calculations, can make use of this application as handy. The user can find the output values of a matrix for a maximum of size 3 X 3, i.e 3 rows and 3 columns. If the size of the matrix is above 3 then the compilation time will also be more.

## Defining Our System
*First after running the program the user will be required to choose the operation they wanted to perform on matrix. Then using switch cases and according to user input the respective operation function is called. Then the user will be required to enter the matrix size. After that the user is requires to enter the matrix elements by putting space between each spaces. The input is stored in 2D arrays which are dynamically allocated and passed to the respective functions. Then the output is printed on the screen. This whole process is in a loop until the user presses a key which will exit the program.

## **Swot Analysis:**

### Strengths:
a) To perform operation like addition, Subtraction and Multiplication on the pair of matrices.

b) To perform operation like determinant anf tanspose on single matrix.

c) No limit for dimension of the matrix.

### Weakness:
a) Restricted to only square matrices.

b) Limited number of operations defined.

c) The maximum size of the matrix is restricted tom the macimum value of integer.

## Opportunities:
a) Opportunity to solve large matrix problems faster.

b) Saves time on solving matrix problems in research applications.

c) Simples and efficient solution.

### Threats:
a) Possible memory leaks.

b) Availability of better options in market


# 4W&#39;s and 1&#39;H

## Who:
 * Students who want to solve matrix related problems for their academic work
 * Student working on machine learning and deep learning applications which majorly involve matrices.
 * Software engineers
 * Researchers and mathematicians

## What:
 * Calculate the sum, differemce, product of two matrices and also the determinant, transpose of single matrix.


## When:
 * Students facing a difficulty in solving a matrix related problem, can use this application to verify their outputs.
 * Researchers can use it for getting a quick calculation output.
 * Very Helpful for calculating matrices of huge order.

## Where:
 * Students, employees and researchers who are working on various field which includes matrices.

## How:
 * This program can be executed in a system which has Linux or Windows operating system. 

## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to specify the size of the matrix |Technical| IMPLEMENTED |
| HR02 | User shall be able to perform addition operation on the matrices| Techincal | IMPLEMENTED | 
| HR03 | User shall be able to perform subtraction operation on the matrices| Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to perform multiplication operation on the matrices | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to find determinant of the matrix | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to find transpose of the matrix | Techincal |  IMPLEMENTED  |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). User must specify the size of the matrix.                                                    (2). The size specified is the dimensions of the square matrix | HR01 |  IMPLEMENTED  |
| LR02 | Addition of two matrices can be done (1). The size entered in the begining is same for both the matrices | HR02 |  IMPLEMENTED |
| LR03 | Subtraction of two matrices is implemented in the same manner as addition| HR03 | IMPLEMENTED |
| LR04 | Multiplication of two matrices is done on two square matrices of a specified size| HR04 |  IMPLEMENTED  |
| LR05 | The determinant of a single matrix of a specified size is implemented| HR05 |  IMPLEMENTED  |
| LR06 | The transpose of a single matrix operation is implemented | HR06 |  IMPLEMENTED  |
