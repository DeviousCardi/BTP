#include <stdio.h>
#include <stdlib.h>
int main() {
int n,sum;
int n1=n;
scanf("%d",&n);
sum=n1%10;
while(n1>0){
int temp=n1/10;
 n1=n%10;
 sum=sum*10+temp; }
if(sum==n){
    printf("YES"); }
else printf("NO");
	return 0; }