#include <stdio.h>
long k,l;
void twosum(long a[],long N)
{   static long i,x[1000][1000];
      for(i=0;i<k;i++) {
        x[N][0]=a[N]+a[i]; }
    twosum(a,N-1); }
int main() {
    long N,j,M,a[1000],x[1000][1000],p,flag=0;
    scanf("%ld,%ld",&N,&M);
    k=N;l=M;
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]); }
    twosum(a,N);
    for(j=0;j<N;j++) {
        for(p=0;p<N;p++) {
            if(x[j][p]==M)
            break;flag=1; } }
    if(flag==1)
   printf("YES");
    else
    printf("NO");
    return 0; }