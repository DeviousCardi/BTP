#include <stdio.h>
int main(){
 int a1,a2,n,a,b,c;
 int i;
 scanf ("%d",&a1);
 scanf("%d",&a2);
 scanf("%d",&n);
 a=a1;
 b=a2;
 for(i=3;i<=n;i++){
 c=b+a-2;
 a=b;
 b=c; }
 printf("%d",c);
    return 0; }