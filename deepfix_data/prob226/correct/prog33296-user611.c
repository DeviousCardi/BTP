#include <stdio.h>
int main() {
int a,b;
int d=0;
scanf("%d%d",&a,&b);
int c[a+b];
for (int i=0;i<a;i++)
scanf("%d",&c[i]);
if(b<a) {
printf("%d",c[b]); }
else {
d=c[0];
for (int j=a;j<=b;j++) {
for (int k=j-a+1;k<j;k++)
c[j]=d+c[k]; } }
printf("%d",c[b]);
return 0; }