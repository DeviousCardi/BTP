#include <stdio.h>
int main() {
    int n,i,c=0,a,dig=0,s=0;
    scanf("%d\n",&n);
    a=n;
    while(a!=0) {
        dig=a%10;
        s+=dig;
        a/=10; }
    for(i=n;i<=(n+1000);i++) {
        if(i%s==0) {
            c=n;
            break; } }
    printf("%d\n",c);
    return 0; }