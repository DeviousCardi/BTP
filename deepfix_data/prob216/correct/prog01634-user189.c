#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    if(n==1) return 1;
    else {if(n==2) return 1;
      else return fibonacci(n-1)+fibonacci(n-2); } }
int main() {
int n,val,j,i,a[20];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",a[i]); }
val=fibonacci(a[i]);
printf("%d\n",val);
	return 0; }