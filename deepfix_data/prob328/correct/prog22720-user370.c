#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n==0||n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2); }
int main() {
	int i,j,t,k,f=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i=i+1) {
	    scanf("%d\n",&k);
	    printf("%d\n",k);
	    for(j=0;j<20;j=j+1) {
	                if(fibonacci(j)==k) {
	                        printf("yes\n");
	                        f=1;
	                        printf("%d\n",f);
	                        break; } }
        if(f!=1) {
                printf("no\n"); } }
	return 0; }