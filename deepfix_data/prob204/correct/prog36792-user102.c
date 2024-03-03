#include <stdio.h>
#include <stdlib.h>
int main() {
int n,sum;
int n1=n;sum=0;
scanf("%d",&n);
while(n1>0){
int temp=n1%10;
 n1=n;
 sum=temp*10+sum; }
if(sum==n){
    printf("YES"); }
else printf("NO");
	return 0; }