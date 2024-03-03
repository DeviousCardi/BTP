#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k) {
        return 0; }
    else if((n==k)||(k=0)) {
        return 1; }
    return B(n,k); }
int main() {
int b,n,k;
scanf("%d",&b);
printf("%d",B(n,k));
return 0; }