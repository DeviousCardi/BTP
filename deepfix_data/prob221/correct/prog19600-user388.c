#include <stdio.h>
#include <stdlib.h>
int main() {
int i,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++) {
for(k=1;k<=2*n;k++) {
if(i==1)
{printf("*");}
else if(k==i||k==2*n-i)
{printf("*");} } }
return 0; }