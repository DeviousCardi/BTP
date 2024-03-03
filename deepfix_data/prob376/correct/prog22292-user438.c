#include<stdio.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((float)2*(2*n-1)/(n+1))*catalan(n-1); }
int main(){
    int i,p;
    for(i=0;i<=5;i++) {
        p=catalan(i);
        printf("%d\n",p); }
return 0; }