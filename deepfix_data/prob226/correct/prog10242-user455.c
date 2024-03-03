#include <stdio.h>
int main() {
    int n,d,s=0,i;
    scanf("%d %d",&n,&d);
    int a[31];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {s=s+a[i];}
    a[n]=s;
    for(i=n;i<d;i++) {
       a[i+1]=a[i]+s; }
    printf("%d",a[d]);
	return 0; }