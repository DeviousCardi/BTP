#include <stdio.h>
long s;
int sum (long n, long a[n] ){
    long i,t=0;
    for(i=0;i<n;i++){
        t=t+a[i]; }
    for(i=0;i<n;i++){
    if((t==s)||(sum(n-1,a-a[i]))||sum(n-1,a))
        return 1; }
    t=0;
        return(0); }
int main() {
    long n,i;
    scanf("%ld %ld",&n,&s);
    long a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    if(sum(n,a))
        printf("YES");
    else
        printf("NO");
    return 0; }