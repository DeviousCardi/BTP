#include <stdio.h>
int fibonacci(int n) {
    if(n==0)
    return 0;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int main(){
    int i,p;
    for(i=0;i<=8;i++) {
        p=fibonacci(i);
        printf("%d",p); }
return 0; }