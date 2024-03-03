#include <stdio.h>
long k,l;
void twosum(long a[],long N)
{   static long i,x[1000];
      for(i=0;i<k;i++) {
        x[i]=a[N]+a[i];
        if(x[i]==l)break;printf("yes")
      }break;
    twosum(a,N-1); }
int main() {
    long N,j,M,a[1000];
    scanf("%ld,%ld",&N,&M);
    k=N;l=M;
    for(j=0;j<N;j++) {
        scanf("%ld",&a[j]);
    }twosum(a,N);
    return 0; }