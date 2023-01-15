#include<stdio.h>
//detecting position of given element in 2d array.
int main(){
   /* 2D array declaration*/
   int disp[2][3]={{1,2,3},{1,2,3}};
   /*Counter variables for the loop*/
   int i, j;
   //inputting the question.
   int question,flag=0;
   printf("enter the number you are searching for :\n");
   scanf("%d",&question);
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         if (disp[i][j]==question){
             flag=1;
             break;
         }
         }
      }
   
   if(flag==1){
       printf("element at [%d][%d]",i,j);
   }
   else{
       printf("element not found\n");
   }
   return 0;
}

