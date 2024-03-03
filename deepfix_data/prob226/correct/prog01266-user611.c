#include <stdio.h>
int main() {
int a,b,d;
scanf("%d%d",&a,&b);
int c[a];
for (int i=0;i<a;i++)
scanf("%d",&c[i]);
d=c[0];
for (int j=0;j<b;j++)
d=d+c[j];
printf("%d",d);
return 0; }