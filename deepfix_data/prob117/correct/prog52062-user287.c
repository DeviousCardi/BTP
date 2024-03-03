#include <stdio.h>
#include <stdlib.h>
int main() {
long long n,r;
scanf("lld",&n);
n=n+1;
r=n%2;
while(r==0&&n!=0) {
    n=n/2;
    r=n%2; }
if(n==0&&r==1)
printf("YES");
else
printf("NO");
	return 0; }