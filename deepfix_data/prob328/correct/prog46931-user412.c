#include <stdio.h>
#include <stdlib.h>
int const p=20;
int fib_ser(int n){
    if(n<=1){
        return n; }
    else{
        return fib_ser(n-1)+fib_ser(n-2); } }
int main() {
    int t,i,a[t],b[p];
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]); }
    for(i=0;i<p;i++){
        b[i]=fib_ser(i); }
    for(i=0;i<t;i++){
        printf("%d\n",b[i]); }
	return 0; }