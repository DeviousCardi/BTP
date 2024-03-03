#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
if (n==0)
return 1;
else
return (2*(2*n-1)*catalan(n-1))/(n+1); }
int sum_catalan (int n) {
   int sum=0,i;
   for (i=0;i<n-1;i++) {
       sum = sum + catalan(i); } }
int main() {
    int test, arr[15], i, j;
    scanf("%d",&test);
    for (i=0;i<test;i++) {
        scanf("%d",arr[i]);
        j=arr[i];
        printf("%d\n",sum_catalan(j)); }
	return 0; }