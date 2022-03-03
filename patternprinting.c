#include<stdio.h>
/*INPUT
*the only input given is the no of rows
*the number of rows is taken as an integer
*/

/*OUTPUT
*the output desired is  a pattern made up of "$" , and looks like a staircase
*/

/*PROCESSING
Iterative approach to the problem to be used by using a nested for loop
*/

/*SOLUTION ALTERNATIVES
* A for loop may be used for simplicity
* A while loop may be used to create the effect of a for loop
* please note that a decrementing function is to be in control in both cases
* the loops must be nested within each other.
*/

/*
1.First include the standard library for c
2.Initiate the main function
3.declare two variables, both integers , one would be the input and the other the decrementing function
4.ask user for input and store it in the variable
5.initiate a for loop and nest another for loop within it
6.print the "$" symbol using the for loop everytime iterating on the same line 
7.make sure that the number of times it prints on the same line is the same as 
  the value of the decrementing variable during that iteration.
8.Make sure loop is NOT infinite and execute
*/

int
main ()
{
  int a;
  int i;
  int j;
  printf ("please enter the no of rows :\n");
  scanf ("%d", &a);
  for (i = 0; i <= a; i++)
    {
        for (j=0;j<=i-1;j++){
        printf ("$");
        }
        printf("\n");
    }
  return 0;
}
