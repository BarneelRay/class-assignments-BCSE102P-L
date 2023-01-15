//Program to add given number of elements to an  array.
#include<stdio.h>
int main(){
int n;
printf("how many elements do you want to add\n");
scanf("%d",&n);
int i,arr[n];
    printf("input all elements you wish to add to array and press any integer to continue\n");
    for(i=0;i<(n);i++){
        scanf("%d ",&arr[i]);
        
}
printf("Your array now looks like\n");
for (i=0;i<=(n-1);i=i+1){
    printf("%d\t",arr[i]);
}
}
