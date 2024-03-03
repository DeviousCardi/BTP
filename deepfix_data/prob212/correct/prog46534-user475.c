#include <stdio.h>
int main() {
    int n,i,c=0,a,dig=0,s=0;
    scanf("%d\n",&n);
    a=n;
    while(a!=0) {
        dig=a%10;
        s+=dig;
        a/=10; }
    i=2016;
    while(i>=2016) {
        if((i%s==0)&&(i>=n)) {
            c=i;
            break; }
        i++; }
    printf("%d\n",c);
    return 0; }