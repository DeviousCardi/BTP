#include<stdio.h>
#include<stdlib.h>
int fib(int a) {
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else
        return fib(a-1)+fib(a-2); }
int main() {
    int i,j,t;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]);
        for(j=1;;j++) {
            if(fib(j)==k[i]) {
                printf("yes\n");
                break; }
            if( fib(j)>k[i] ) {
                printf("no\n");
                break; } } }
    return 0; }