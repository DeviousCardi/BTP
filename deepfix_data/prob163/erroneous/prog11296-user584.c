#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j;
int m,n;
int sum;
int a[500];
int b[500];
scanf("%d%d",&m,&n);
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(j=0;j<m;j++) {
    scanf("%d",&b[j]); }
if(m==n){
sum=a[i]+b[j];
printf("%d",sum)}
	return 0; }