#include<stdio.h>
//finding max and min of all the elements of 3d array.
int main(){
    int arr1[2][3][3]={{{1,2,33},{1,22,31},{1,2,34}},{{32,22,33},{1,122,333},{22,33,1}}};
    int i,j,k;
    int sum=0;
    int max=arr1[0][0][0];
    int min=arr1[0][0][0];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(arr1[i][j][k]<min){
                    min=arr1[i][j][k];
                }
                else if (arr1[i][j][k]>max){
                    max=arr1[i][j][k];
                }
            }
        }
    }
    printf("%d is the max of the array elements\n",max);
    printf("%d is the min of the array elements\n",min);
    return 0;
}
