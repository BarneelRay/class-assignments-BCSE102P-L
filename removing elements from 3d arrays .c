#include<stdio.h>
//removing elements in  3d arrays.
int i,j,k;//variables for nested for loops
int n1,n2,n3;
int main()
{
	int arr[2][3][3]={{{1,23,11},{1,1,22},{1,445,2}},{{1,1,4},{1,2,4},{1,4,55}}};              //array declaration
	printf("enter index to delete as x y z with spaces in between: \n");
	scanf("%d %d %d",&i,&j,&k);
	arr[i][j][k]=0;
	for(n1=0;n1<2;n1++){
	    for(n2=0;n2<3;n2++){
	        for(n3=0;n3<3;n3++){
	            printf("%d is the element at [%d][%d][%d]\n",arr[n1][n2][n3],n1,n2,n3);
	        }
	    }
	}
	return 0;
}
