#include <stdio.h>
#include <stdlib.h>
 int b;
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    for(n=0;n<b;n++)
{   for(k=0;k<=n;k++) {
    if((k==0&&n==0)||k==0) return 1;
    if(fact(n)/(fact(k)*fact(n-k))==b)
    return n; } }
return B(n-1,k)+B(n-1,k-1); }
int main() {
     int n,k;
    scanf("%d",&b);
printf("%d",B(n,k));
	return 0; }