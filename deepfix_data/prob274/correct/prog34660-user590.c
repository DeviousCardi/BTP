#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int r[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&r[i]);
    int c,t=1,d=r[0],e=0;
    for(;e!=100;) {
        c=d-1;
        d=r[c];
        t++;
        for(int i=0;i<c;i++) {
            if(d==r[i])
            e=100;
            break; } }
    int k=t-1;
    printf("%d %d",t,k);
    return 0; }