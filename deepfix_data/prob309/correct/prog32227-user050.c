#include <stdio.h>
int main() {
    int n,x;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<(n*2-1);i++) {
        scanf("%d",&x);
        if(i%2==0) {
            N[i/2]=x; }
        printf("%d",N[i/2]); }
    return 0; }