#include<stdio.h>
//searching non zero  elements at given position in  3d arrays.
int n1,n2,n3;//variables for nested for loops
int q1,q2,q3;
int main()
{
	int arr[2][3][3]={{{1,23,11},{1,1,22},{1,445,2}},{{1,1,4},{1,2,4},{1,4,55}}};              //array declaration
	printf("enter position to search in: \n");
	scanf("%d\n",&q1,&q2,&q3);
	
	if(arr[q1][q2][q3]==0){
	    printf("Sorry element is zero.\n");
	}
	else{
	    printf("element is non zero.\n");
	}
	return 0;
}

