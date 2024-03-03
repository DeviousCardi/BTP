#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
int s=0;
int a[20];
a[0]=-32769;
a[n+1]=a[0];
for (i=1;i<n+1;i++) {
    scanf("%d\n",&a[i]); }
for(j=1;j<n+2;j++) {
    if(a[j]>a[j-1]&&a[j]>a[j+1])
    s=1;
    break; }
if(s==1)
printf("Yes");
else
printf("No");
	return 0; }