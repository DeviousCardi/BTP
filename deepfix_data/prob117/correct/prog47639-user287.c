#include <stdio.h>
#include <stdlib.h>
int power(int n) {
    if(n==0)
    return 1;
    else 2*power(n-1); }
int main() {
long long a[10000],k;int m,i,p=0;
scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%lld",&a[i]);
for(i=0;i<m;i++) {
    p=0;
    while(k>0) {
        k=a[i]+1;
        k=k-power(p++); }
if(k==0)
printf("yes\n");
else
printf("no\n"); }
	return 0; }