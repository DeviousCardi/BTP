#include <stdio.h>
int main(){
 int n,m,i,sum=0;
 scanf("%d%d",&m,&n);
     for(i=1;i<n;i=i+1) {
         if(n%(i+1)==0) {
             sum=sum+1; } }
   if(sum==m)
       printf("YES");
   else
       printf("NO");
    return 0; }