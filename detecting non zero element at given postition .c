#include<stdio.h>
//detecting non zero element at given position.
int main(){
   /* 2D array declaration*/
   int disp[2][3]={{1,2,3},{1,2,3}};
   /*Counter variables for the loop*/
   int i, j;
   //inputting the question.
   int question1,question2;
   printf("enter the position you are searching for :\n");
   scanf("%d\n%d",&question1,&question2);
   if(disp[question1][question2]==0){
       printf("not a non zero element");
   }
   else{
       printf("non zero element found at given postition");
   }
   
   
   return 0;
}

