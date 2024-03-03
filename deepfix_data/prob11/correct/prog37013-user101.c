#include <stdio.h>
long s;
int sum (long n, long a[n] , long p){
    if(n==0)
        return 0;
    if((p==s)||(sum(n-1,a, p+a[n-1]))||sum(n-1,a, p)){
        return 1; }
        return(0); }
int main() {
    long n,i;
    scanf("%ld %ld",&n,&s);
    long a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    if(sum(n,a,0))
        printf("YES");
    else
        printf("NO");
    return 0; }