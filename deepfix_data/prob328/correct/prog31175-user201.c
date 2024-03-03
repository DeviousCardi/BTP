#include <stdio.h>
#include <stdlib.h>
int fibo(n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibo(n-1)+fibo(n-2); }
int main() {
    int i,t,y=0,k;
scanf("%d", &t); {
    t=t-1;
scanf("%d", &k);
for(i=0;i<=20;i++){ if(fibo(i)==k){
    y=1;
    break;
}}
if(y==1) printf("yes");
else printf("no");
y=0;}
return 0; }