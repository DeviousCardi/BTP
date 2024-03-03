#include<stdio.h>
long int sum(long int ar[],long int i,long int size) {
  long  int c;
    c=sum(ar,i-1,size)-ar[i];
    if(i==0) {
       return ar[0]; }
   return c; }
int main() {
long  int N,i;
    scanf("%ld\n",&N);
    if((N>=2) && (N<=(100000))) {
long int ar[N];
    for(i=0;i<N;i++) {
        scanf("%ld ",&ar[i]);
        if((ar[i]>(1000000000))||(ar[i]<(-1000000000))) {
            break;
            return 0; } }
 long   int b=sum(ar,N-1,N);
    printf("%ld",b); }
    return 0; }