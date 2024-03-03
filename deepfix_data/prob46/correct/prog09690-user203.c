#include <stdio.h>
int main() {
    int m,n,i;
    int sum=0;
    scanf("%d%d",&m,&n);
    if(m>0&&n>0) {
        for(i=1;i<=n;i++) {
            if(n%i==0) {
                sum=sum+1; } }
        if((sum-2)==m) {
            printf("YES"); }
        else
        printf("NO"); }
    return 0; }