#include <stdio.h>
int func(int i,int n,int d) {
            int r;
            r=i-(n-d);
            if(r<=0) {
            r=r+n;
            return r; }
            else
            return r; }
int main() {
    int i,n,d;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n-1;i++) {
        scanf("%d ",&ar[i]); }
    scanf("%d\n",&ar[n-1]);
    scanf("%d\n",&d);
    for(i=1;i<=n;i++)
    printf("%d ",ar[func(i,n,d)-1]);
    return 0; }