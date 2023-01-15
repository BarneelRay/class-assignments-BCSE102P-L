#include <stdio.h>
//code to sum all elements of an array.
int  main()
{
    int a[1000],i,size,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
     return 0;
}
