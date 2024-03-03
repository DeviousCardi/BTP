#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
int n,m,i;
int a[n];
int b[m];
char ch;
scanf("%d%d",&n,&m);
 ch=getchar();
for(i=0;i<=n-1;i++){
    a[i]=getchar();
    ch=getchar(); }
for(i=0;i<=m-1;i++){
    b[i]=getchar(); }
long int sum_1=0;
for(i=0;i<=n-1;i++){
    sum_1=sum+a[n-i-1]*pow(10,i); }
long int sum_1=0;
for(i=0;i<=m-1;i++){
    sum_2=sum+b[m-i-1]*pow(10,i); }
printf("%lu",sum_1+sum_2);
	return 0; }