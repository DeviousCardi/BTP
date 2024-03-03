#include <stdio.h>
#include <stdlib.h>
int main() {
    int res,j;
    int i;long fib[23];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<23;i=i+1) {
        fib[i]=fib[i-1]+fib[i-2]; }
	int t;long n;
	scanf("%d",&t);
	for(i=0;i<t;i=i+1) {
	    scanf("%ld",&n);
	    res=0;
	    for(j=0;j<23;j=j+1) {
        if(fib[j]==n){res=1;break;} }
	    if(res==1){printf("yes\n");}
	    else{printf("no\n");} }
	return 0; }