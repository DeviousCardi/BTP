#include <stdio.h>
int main(){
 int n,i,j,m;
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&m);
         if(i==j) {
             if(m==1)
             printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
             else
             printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX"); }
         if(i!=j)
         {   if(m==0)
             printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
             else
             printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX"); } } }
    return 0; }