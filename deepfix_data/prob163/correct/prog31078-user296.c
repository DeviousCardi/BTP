#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,u,num1,num2,i;
    int sum1=0,sum2=0;
    scanf("%d%d",&n,&u);
    scanf("%d%d",&num1,&num2);
int long s[n],t[u];
for(i=0;i<n;i++) {
    s[i]=num1;
sum1=sum1+s[i];
scanf("%ld",&s[i]); }
for(i=0;i<u;i++) {
t[i]=num2;
sum2=sum2+t[i];
scanf("%ld",&t[i]); }
printf("%d",(sum1+sum2)/2);
	return 0; }