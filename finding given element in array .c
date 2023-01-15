#include<stdio.h>
int main(){
    int arr[10000],i,flag,quiery,size;
    printf("enter array size::");
    scanf("%d",&size);
    printf("enter elements of array::\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //Now we take the element to search and find it out in the array.
    printf("what element are you looking for::\n");
    scanf("%d",&quiery);
    for (i=0;i<size;i++){
        if(arr[i]==quiery){
        flag=1;
        break;
        }
        else{
        continue;
        }
    }
    if (flag==1){
        printf("we found the element at position(index) of :%d\t",i);
    }
    else{
        printf("sorry not found ");
    }
    return 0;
}
