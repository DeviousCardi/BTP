#include <stdio.h>
#include <stdlib.h>
int main() {
		int i,j,n,k,t,l;
	scanf("%d",&n);
int s=0;
int a[20];
a[0]=-32769;
a[n+1]=a[0];
for (i=1;i<n+1;i++) {
    scanf("%d\n",&a[i]); }
a[n+1]=-32769;
scanf("%d",&t);
for(j=0;j<t;j++) {
    for(l=0;l<t;l++) {
    scanf("%d",&k);
    if(a[k+1]>a[k+2]&&a[k+1]>a[k])
    s=1;
    break; }
if(s==1)
printf("Yes");
else
printf("No"); }
	return 0; }