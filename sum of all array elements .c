#include<stdio.h>
// 2-d-arrays
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
=======
//finding sum of all the elements of 3d array.
int main(){
    int arr1[2][3][3]={{{1,2,33},{1,22,31},{1,2,34}},{{32,22,33},{1,122,333},{22,33,1}}};
    int i,j,k;
    int sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum+=arr1[i][j][k];
            }
        }
    }
    printf("%d is the sum of the array elements.\n",sum);
    return 0;
}
