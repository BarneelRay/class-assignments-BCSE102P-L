#include<stdio.h>
//comparing two 3d character  arrays for common values.
int main(){
    char arr1[2][3][3]={{{"app"},{"cap"},{"tap"}},{{"rap"},{"lap"},{"nap"}}};
    char arr2[2][3][3]={{{"map"},{"rgb"},{"sst"}},{{"bsc"},{"job"},{"pot"}}};
    int n1,n2,n3;
    int common_count=0;
    for(n1=0;n1<2;n1++){
        for(n2=0;n2<3;n2++){
            for(n3=0;n3<3;n3++){
                if (arr1[n1][n2][n3]==arr2[n1][n2][n3]){
                    printf("%c is common\n",arr1[n1][n2][n3]);
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
