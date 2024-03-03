#include <stdio.h>
#include <stdlib.h>
int const p=20;
int fib_ser(int n){
    if(n<=1){
        return n; }
    else{
        return fib_ser(n-1)+fib_ser(n-2); } }
int main() {
    int t,i,j,a[t];
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]);
        for(j=0;j<p;j++){
            if(a[i]==fib_ser(j)){
                printf("yes\n");
                count=1;
                break; } }
        printf("no\n"); }
	return 0; }