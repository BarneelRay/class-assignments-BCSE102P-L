#include <stdio.h>
//code to find maximum and minimum element in array.
int  main()
{
    int a[1000],i,size,max,min,k;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(k=0;k<size;k++){
        if (a[k]>max){
            max=a[k];
        }
        else if(a[k]<min){
            min=a[k];
        }
    }
    printf("%d is the minimum element\n",min);
    printf("%d is the maximum element\n",max);
     return 0;
}
