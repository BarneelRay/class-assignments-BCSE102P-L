#include<stdio.h>
//insertion of elements only at positions with both even indexes in 2 d array.
int main(){
   /* 2D array declaration*/
   int disp[2][3]={{0}};
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         if (i%2==0&&j%2==0){
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
         }
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

