#include<stdio.h>
int main(){
    int array[5];
    int posn, i , num;
    printf("enter size\n");
    scanf("%d",&num);
    printf("now add the array elements:\n");
    for (i==0;i<num;i++){
        scanf("%d\n",&array[i]);
    }
    printf("give position of element to delete:\n");
    scanf("%d",&posn);
    if (posn>=num+1)
    {
        printf("error: cant delete position not in array\n");
    }
    else{
        for (i = posn - 1; i < num -1; i++)  
        {  
            array[i] = array[i+1]; // assigning arr[i+1] to arr[i]  
        }  
    }
    printf("the final array is:\n");
     for (i = 0; i< num - 1; i++)  
        {  
            printf (" array[%d] = ", i);  
            printf (" %d \n", array[i]);  
        }  
    
    return 0;
}
