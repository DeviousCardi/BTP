#include <stdio.h>
#include <stdlib.h>
int const p=20;
int fib_ser(int n){
    if(n<=1){
        return n; }
    else{
        return fib_ser(n-1)+fib_ser(n-2); } }
int main() {
    int t,i,j,a[t],count;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]);
        for(j=0;j<p;j++){
            count=0;
            if(a[i]==fib_ser(j)){
                printf("yes\n");
                count++;
                break; }
            else{
                continue; } }
        if(count!=0){
        printf("no\n"); } }
	return 0; }