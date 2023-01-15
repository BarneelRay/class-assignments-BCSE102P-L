#include<stdio.h>
//code to compare two 1d character arrays for common values
char a1[5]="richa";
char a2[5]="mitra";
int i ,j ;
char main(){
for (i=0; i<5; i++){
    for(j=0; j<5; j++){
        if(a1[i]==a2[j]){
            printf("%c\n",a1[i]);
        }
    }
}
return 0;
}
