#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y,i,j=0,count=0,k=0,c[999],d[999];
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d\n",&y);
int a[9999],b[9999];
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(i=0;i<m;i++)
scanf("%d ",&b[i]);
for(i=0;i<n;i++) {
        if(a[i]-x<=b[j]&&b[j]<=a[i]+y) {
            count++;
            c[k]=i;d[k]=j;
           j++; } }
printf("%d",count);
for(i=0;i<k+1;i++)
printf("%d %d\n",c[i],d[i]);
	return 0; }