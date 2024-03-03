#include <stdio.h>
int main() {
    int n,x;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<((n*2)-1);i++) {
        scanf("%d,",&x);
        printf("--%d-- ",x);
        if(i%2==0) {
            N[i/2]=x; } }
    for(int i=0;i<n;i++) {
        printf("%d",N[i]); }
    return 0; }