#include <stdio.h>
int main() {
    int n,a,i;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   count=count+1; {
          if(count>1) {
    printf("%d\n",a); }
       else
       if(i!=a) {
         printf("%d",i); } }
   return 0; }