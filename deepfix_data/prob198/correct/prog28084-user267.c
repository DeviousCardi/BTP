#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2,i;
	scanf("%d\n",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
	scanf("%d\n",&a[i]);
	scanf("%d\n",&n2);
	int b[n2];
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
int j=a[0],k,m;
for(i=0; i<n1-1;i++){
if(j<a[i+1])
j=j;
else j=a[i+1]; }
for(i=0; i<n2-1;i++){
if(k<b[i+1])
k=k;
else k=b[i+1]; }
printf("%d",k);
	return 0; }