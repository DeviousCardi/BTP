#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,c=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n-1;i++) {
    if((a[i]>a[i-1])&&(a[i]>a[i+1]))
    c++; }
if(c>0)
printf("Yes");
else
printf("No");
	return 0; }