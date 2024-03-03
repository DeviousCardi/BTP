#include <stdio.h>
int main(){
 int a,n,i,j;
 scanf("%d\n",&n);
 for(i=0;i<=n;i++){
     for(j=0;j<=n;j++){
        scanf("%d",&a);
         if(i==j){
           if(a==1)
             continue;
             else
             printf("GIVEN matrix is NOT an IDENTITY MATRIX"); }
         else{
             if(a==0)
             continue;
             else
            printf("GIVEN matrix is NOT an IDENTITY MATRIX"); } } }
 printf("GIVEN matrix is an IDENTITY MATRIX");
    return 0; }