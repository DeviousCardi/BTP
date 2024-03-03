#include <stdio.h>
#include <stdlib.h>
int fibo(int k,int a,int b) {
    if(k==0)
    return a;
    return(k-1,b,a+b); }
int main() {
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++) {
        printf("%d\n",fibo(a[i]+2,0,1)); }
	return 0; }