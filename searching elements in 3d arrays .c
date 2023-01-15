#include<stdio.h>
//searching  elements in  3d arrays.
int n1,n2,n3;//variables for nested for loops
int q;
int locations_obtained=0;
int main()
{
	int arr[2][3][3]={{{1,23,11},{1,1,22},{1,445,2}},{{1,1,4},{1,2,4},{1,4,55}}};              //array declaration
	printf("enter element to search for: \n");
	scanf("%d",&q);
	for(n1=0;n1<2;n1++){
	    for(n2=0;n2<3;n2++){
	        for(n3=0;n3<3;n3++){
	            if(arr[n1][n2][n3]==q){
	                printf("ELEMENT FOUND AT [%d][%d][%d]\n",n1,n2,n3);
	                locations_obtained=locations_obtained+1;
	            }
	        }
	    }
	}
	if(locations_obtained==0){
	    printf("Sorry element not in array.\n");
	}
	return 0;
}

