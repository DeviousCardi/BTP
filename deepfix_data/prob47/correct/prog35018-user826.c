#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 0;
int sum=0;int i;
for(i=0;i<n;i++) {
    sum=sum+cat(i)*cat(n-i-1); }
return sum; }
int main() {
	int n,i,arr[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d\n",&arr[i]);}
	for(i=0;i<n;i++)
{	printf("%d\n",cat(arr[i]));}
	return 0; }