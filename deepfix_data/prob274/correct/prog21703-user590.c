#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int r[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&r[i]);
    int c,t=1,d=r[0],e=r[1];
    for(;;) {
        c=d-1;
        d=r[c];
        t++;
        printf("%d",t);
        if(d==r[0])
        break; }
    int k=t-1;
    printf("%d %d",t,k);
    return 0; }