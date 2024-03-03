#include<stdio.h>
int N;
long p=1;
int product(int a[],int n) {
        if(n==N) {
                return p; }
        p=p*a[n];
        return product(a,n+1); }
int main() {
    scanf("%d\n",&N);
    int a[N];
    for(int i=0;i<N;i++) {
            scanf("%d ",&a[i]); }
    int ans=product(a,0);
    printf("%ld",ans);
    return 0; }