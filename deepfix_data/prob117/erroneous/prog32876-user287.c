#include <stdio.h>
#include <stdlib.h>
int main() {
long long a[10000],r;int m;
scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%lld",&a[i]);
for(i=0;i<m;i++) {
    a[i]=a[i]+1;
while(r==0&&a[i]!=0) {
    a[i]=a[i]/2;
    r=a[i]%2; }
if(a[i]==0&&r==1)
printf("yes");
else
printf("no"); }
	return 0; }