#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int r[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&r[i]);
    int c,t=1,d=r[0];
    for(;d!=100;) {
        c=d-1;
        d=r[c];
        t++;
        for(i=0;i<c;i++) {
            if(d==r[i])
            break;
            d=100 } }
    int k=t-1;
    printf("%d %d",t,k);
    return 0; }