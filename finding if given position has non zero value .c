#include<stdio.h>
//Program to check for non zero value at given postion of an array.
int main(){
    int position , arr[5]={1,2,0,3,4};
    printf("enter position(index) to check for 0 value:");
    scanf("%d",&position);
    if (arr[position]!=0){
        printf("yes the value is non zero at the given position\n");
    }
    else{
        printf("no the value is  zero");
    }
    return 0;
}
