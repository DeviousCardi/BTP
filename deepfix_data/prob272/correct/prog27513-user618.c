#include <stdio.h>
int main(){
 int a1,a2,n,a,b,c;
 int i=1;
 scanf ("%d",&a1);
 scanf("%d",&a2);
 scanf("%d",&n);
 a=a1;
 b=a2;
 if (n==1)
 printf ("a1");
 else if (n==2)
 printf("a2");
 else if (n>2)
 while(i<=n){
 c=b+a-2;
 a=b;
 b=c;
 printf ("b");
 i=i+1; }
    return 0; }