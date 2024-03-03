#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        check_fib(k); }
	return 0; }
void check_fib(int j) {
    for(j=0;j<20;j++) {
        if(fib(j)==k) {
           printf("yes"); }
        else {
            printf("no"); } }
    return 0; }
void fib(int m) {
    if(m<=1)
    return m;
    else
    return fib(m-1)+fib(m-2); }