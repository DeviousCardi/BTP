#include <stdio.h>
int main() {
    int n,i,c=0,a,dig=0,s=0;
    scanf("%d\n",&n);
    a=n;
    while(a!=0) {
        dig=a%10;
        s+=dig;
        a/=10; }
    for(i=2016;i<=3016;i++) {
        if(i%s==0) {
            c=i;
            break; } }
    printf("%d\n",c);
    return 0; }