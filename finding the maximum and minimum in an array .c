#include<stdio.h>
//max and min of all elements in 2d array.
int main(){
   /* 2D array declaration*/
   int arr[2][3]={{1,2,3},{1,232,22}};
   int max=arr[0][0];
   int min=arr[0][0];
   //iterate update the maximum and minimum element.
   int i,j;
   for(i=0;i<2;i++){
       for(j=0;j<3;j++){
           if(arr[i][j]>max){
               max=arr[i][j];
           }
           else if(arr[i][j]<min){
               min=arr[i][j];
           }
       }
   }
   
   printf("%d is the max of all the elements of the array.\n",max);
   printf("%d is the min of all the elements of the array.\n",min);
   return 0;
}

