#include <stdio.h>
long k;
void twosum(long a[],long N)
{   long i,x[1000];
    for(i=0;i<k;i++) {
        x[i]=a[N]+a[i]; }
    twosum(a,N-1); }
int main() {
    long N,j,M,a[1000],x[1000];
    scanf("%ld,%ld",&N,&M);
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]);
    }twosum(a,N);
    if(x[j]==M)
    printf("YES");
    else
    printf("NO");
    for(j=0;j<N;j++) {
        printf("%ld",x[j]); }
    return 0; }