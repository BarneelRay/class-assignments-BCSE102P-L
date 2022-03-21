#include<stdio.h>
int main()
{
    //This is the code for inserting one element into the array.
   int oned_array[5]={0};//all elements are initialised as 0
   oned_array[0]=234;//here we assign a value to the 1st element of the array.
   //Displaying array elements
   int i;
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
   {
    printf("%d ", oned_array[i]);
	}
    return 0;
}
