#include<stdio.h>
void difference(long s[],long start,long n) {
        if (start==n) {
            return; }
        if(start<n) {
                if(start!=0) {
                    s[start]= s[start-1]-s[start]; } }
         difference(s,start+1,n); }
int main() {
    long N;
     scanf("%ld\n",&N);
    long a[100000];
    for(long i=0;i<N;i++)
    scanf("%ld",&a[i]);
      difference(a,0,N);
    printf("%ld",a[N-1]);
    return 0; }