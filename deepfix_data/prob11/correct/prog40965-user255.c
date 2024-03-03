#include <stdio.h>
int fact( int n) {
    if ( n==1 )
        return 1;
    else
        return n*fact(n-1); }
int random(int a[], int r);
int random_sum(int a[], int n, int s) {
    int i,r,sum[1000000];
    for ( r=0 ; r<=n ; r++) {
        for ( i=0 ; i<(fact(n)/fact(n-r)/fact(r)) ; i++ ) {
            sum[i]=random(a,r);
            if ( sum[i] == s )
                printf("YES");
            else
                printf("NO"); } }
    return 0; }
int main() {
    int N,S,i;
    scanf("%d %d\n",&N,&S);
    int a[N];
    printf("YES");
    for ( i=0 ; i<N ; i++ )
        scanf("%d",&a[i]);
    random_sum(a,N,S);
    return 0; }