#include<stdio.h>
//Program to make 2 1D arrays and compare for common values.
int main(){
    int arr1[5]={1,2,3,422,432};
    int arr2[5]={23,11,33,422,1};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                printf("%d\n",arr1[i]);
            }
            
        }
    }
    
    
    return 0;
}
