#include<stdio.h>
//detecting common elements in array.
int main(){
   /* 2D array declaration*/
   int disp[2][3]={{1,2,3},{1,2,3}};
   int asp[2][3]={{1,12,3},{1,2324,2}};
   int a1[6]={0};//dummy 1d array 1.
   int a2[6]={0};//dummy 1d array 2.
   /*Counter variables for the loop*/
   int i, j,k1=0,k2=0;
   //inputting the question.
   for(i=0;i<2;i++){
       for(j=0;j<3;j++){
           a1[k1]=disp[i][j];
           a2[k2]=asp[i][j];
           k1=k1+1;
           k2=k2+1;
       }
      
   }
   for(i=0;i<k1;i++){
       for(j=0;j<k2;j++){
           if(a1[i]==a2[j]){
               printf("%d is common at some position.\n",a1[i]);
           }
       }
   }
   return 0;
}

