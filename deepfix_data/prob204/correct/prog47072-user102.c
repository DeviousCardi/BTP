#include <stdio.h>
#include <stdlib.h>
int main() {
int n,sum;
scanf("%d",&n);
sum=0;
int n1=n;
while(n1>0){
int temp=n1%10;
n1=n1/10;
sum=(temp*10+sum)*10; }
if(sum==n){
    printf("YES"); }
else printf("NO");
	return 0; }