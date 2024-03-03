#include <stdio.h>
#include <stdlib.h>
int main() {
int n,c=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)scanf("%d",&a[i]);
for(int j=0;j<n;j++) {
    for( int k=j+1;k<n;k++) {
     if(a[j]>a[k])c=c+1; } }
printf("%d\n",c);
for(int j=0;j<n;j++)
{int e=0;
    for( int k=j+1;k<n;k++) {
     if(a[j]>a[k])e=e+1; }
    printf("%d ",e); }
	return 0; }