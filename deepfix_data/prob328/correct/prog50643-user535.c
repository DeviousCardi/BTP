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
        scanf("%d\n",&k);
        ar[i]=k; }
    for(i=0;i<t;i++){
        for(j=0;j<100;j++){
            if (ar[j]==k)
            {printf("yes\n");}
            else
            {printf("no\n");}
            break; } }
	return 0; }