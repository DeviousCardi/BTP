#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
    int i,t,ar[100],k,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        ar[i]=k;
        }int count=0;
    for(i=0;i<t;i++){count=0;
        for(j=0;j<100;j++){
            if(fib(j)==ar[i]){count++;break;}
        }if(count==1)printf("yes");else printf("no"); }
	return 0; }