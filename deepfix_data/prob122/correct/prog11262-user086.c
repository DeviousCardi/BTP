#include <stdio.h>
int main(){
 int n,i,j,a,count=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++) {
         scanf("%d",&a);
         if(i==j) {
             if(a==1)
             {count=1;}
             else
             {count=0;
                 break; } }
         else{
             if(a==0)
             {count=1;}
             else
             {count=0;
             break;} } } }
 if(count==1)
 {printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");}
 else
 {printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX");}
    return 0; }