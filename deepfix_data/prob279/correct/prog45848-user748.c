#include <stdio.h>
int main() {
    int n,i,a;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++)
    count=count+1;
    if(count>1) {
       printf("%d\n",a);
        printf("%d",i); } }
   return 0; }