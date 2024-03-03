#include <stdio.h>
#include <stdlib.h>
int f(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else return f(n-1)+f(n-2); }
int main() {
	int n,i,arr[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
    scanf("%d\n",&arr[i]); }
for(i=0;i<n;i++)
{printf("%d\n",f(arr[i])); }
	return 0; }