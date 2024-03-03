#include <stdio.h>
int main(){
 int n,m,i,sum;
 sum=0;
 scanf("%d%d",&m,&n);
     for(i=2;i<n;i=i+1) {
         if(n%i==0)
              sum=sum+1; }
   if(sum==n)
      printf("YES");
   else
      printf("NO");
    return 0; }