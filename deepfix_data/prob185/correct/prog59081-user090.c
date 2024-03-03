#include <stdio.h>
int twosum(long a[],long N,long M,long p,long j) {
    if(j==M)
    return 1;
    if(p==N)
    return 0;
    return twosum(a,N,M,p+1,j+a[p])||twosum(a,N,M,p+1,j); }
int main() {
    long N,j,M,a[1000],flag=0;
    scanf("%ld%ld",&N,&M);
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]); }
    flag=twosum(a,N,M,0,0);
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    return 0; }