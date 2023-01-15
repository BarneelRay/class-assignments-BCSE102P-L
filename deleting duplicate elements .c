#include<stdio.h>
int
main ()
{
  
int a[1000], i, j, k, count = 0, d[1000], n;	//initiates all arrays and iteration variables
  printf ("Enter size:\n");
  
scanf ("%d", &n);
  
printf ("Enter Elements:\n");
  
for (i = 0; i < n; i++)
    {
      
scanf ("%d", &a[i]);
      
d[i] = -1;
    
}
  
printf ("initial array is : \n");
  
for (i = 0; i < n; i++)
    {
      
printf ("%d ", a[i]);
    
}
  
for (i = 0; i < n; i++)
    {
      
for (j = i + 1; j < n; j++)
	{
	  
if (a[i] == a[j])
	    {
	      
for (k = j; k < n; k++)
		{
		  
a[k] = a[k + 1];
		
}
	      
j--;
	      
n--;
	    
}
	
}
    
}
  
printf ("\nAfter deleting duplicates we have\n");
  
for (i = 0; i < n; i++)
    {
      
printf ("%d ", a[i]);
    
}

}
