#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,i;
scanf("%d",&n1);
int a[n1];
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
int n2;
scanf("%d",&n2);
int b[n2];
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
int h=a[0];
int g[n1];
for(i=0;i<n1-1;i++){
    if(h<a[i+1]) h=a[i+1];
    else h=h;
    printf("%d",h); }
	return 0; }