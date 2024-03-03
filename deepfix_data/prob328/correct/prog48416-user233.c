#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n==0||n==1)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int main() {
    int f=0,i,k,j=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        f=0;
        scanf("%d",&k);
        while(fibonacci(j)<=k) {
            if(fibonacci(j)==k) {
                printf("Yes\n");
                f=1; }
            j++; }
        if(f==0)
        printf("No\n"); }
	return 0; }