#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n,m,i;
    int a[];
    int b[];
    scanf("%d%d",&n,&m);
char ch=getchar();
for(i=0;i<=n-1;i++) {
    a[i]=getchar();
    ch=getchar(); }
for(i=0;i<=m-1;i++)
b[i]=getchar();
ch=getchar(); }
long int sum=o;
for(i=0;i<=n-1;i++)
    long int sum=0;
    for(i=0;i<=n-1;i=i+1) {
sum=sum+a[n-i-1]*pow(10,i); }
for(i=0;i<=m-1;i++) {
	sum=sum+a[m-i-1]*pow(10,i); }
	printf("%lu",sum);
	return 0; }