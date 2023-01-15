#include<stdio.h>
//comparing two 3d arrays for common values.
int main(){
    int arr1[2][3][3]={{{12,143,11},{11,12,11},{1,22,11}},{{11,113,11},{1,2,3},{11,2,1}}};
    int arr2[2][3][3]={{{12,3,1},{1,2,1},{1,2,11}},{{1,13,1},{11,2,3},{19,2,1}}};
    int n1,n2,n3;
    int common_count=0;
    for(n1=0;n1<2;n1++){
        for(n2=0;n2<3;n2++){
            for(n3=0;n3<3;n3++){
                if (arr1[n1][n2][n3]==arr2[n1][n2][n3]){
                    printf("%d is common\n",arr1[n1][n2][n3]);
                    common_count+=1;
                }
            }
        }
    }
    if(common_count==0){
        printf("sorry no common elements.\n");
    }
    return 0;
}
