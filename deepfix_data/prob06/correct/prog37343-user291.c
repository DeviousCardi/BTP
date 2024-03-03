#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y,i,j=0,count=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d\n",&y);
int a[99999],b[99999];
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(i=0;i<m;i++)
scanf("%d ",&b[i]);
for(i=0;i<n;i++) {
        if(a[i]-x<=b[j]&&b[j]<=a[i]+y) {
            count++;
            printf("%d %d\n",i+1,j+1);
           j++; } }
printf("%d",count);
	return 0; }