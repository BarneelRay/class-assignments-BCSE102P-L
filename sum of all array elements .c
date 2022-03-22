#include<stdio.h>
//sum of all elements in 2d array.
int main(){
   /* 2D array declaration*/
   int arr[2][3]={{1,2,3},{1,232,22}};
   int sum=0;
   //iterate and add all elements together.
   int i,j;
   for(i=0;i<2;i++){
       for(j=0;j<3;j++){
           sum=sum+arr[i][j];
       }
   }
   
   printf("%d is the sum of all the elements of the array.",sum);
   return 0;
}
