# Recursion_In_CPP
## Aim
To study and implement recursion in C++.
## Theory 
Recursion in C++ is a programming technique where a function calls itself repeatedly until a specific base condition is met. This technique allows for solving complex problems by breaking them down into smaller, similar sub-problems. 

Key Components of a Recursive Function:
Base Case: This is the condition that stops the recursion. Without a proper base case, the function would call itself indefinitely, leading to a stack overflow error.
Recursive Step: This is where the function calls itself, typically with a modified input that moves closer to the base case.
## Algorithms 
### Factorial of a number N
1. Start.

2. Input a number n.

3. Define function fact(n):

4. If n <= 1, return 1. Else return n × fact(n-1) (recursive call).

5. Call fact(n) from main() and store the result.

6. Display factorial of n.

7. End.
### Summation of numbers upto N
1. Start.

2. Input a number n.

3. Define function sum(n):

4. If n <= 1, return 1. Else return n + sum(n-1) (recursive call).

5. Call sum(n) from main() and store the result.

6. Display summation of numbers till n.

7. End.
## Conclusion 
We learnt recursion through 2 programs- Factorial of a number and summation of number . 
