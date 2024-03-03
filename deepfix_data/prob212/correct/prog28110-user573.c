#include <stdio.h>
int main() {
    int n,i,j,s=0;
    scanf("%d",&n);
    for(i=n;i!=0;i=(i/10)) {
        j=i%10;
        s=s+j; }
    for(i=2016; ;i++) {
        if(i%s==0) {
            printf("%d",i);
            break; } }
    return 0; }