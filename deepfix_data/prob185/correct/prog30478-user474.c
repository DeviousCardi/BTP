#include <stdio.h>
int recurse(long a[],long sum,long i) {
    if(sum==0)
    return 1;
    if(sum!=0&&i<0)
    return 0;
    else {
        return (recurse(a,sum-a[i],i-1)||recurse(a,sum,i-1)); } }
int main() {
    long n,s,i,sum=0;
    scanf("%ld %ld ",&n,&s);
    long a[n];
    for(i=0;i<n;i++) {
        scanf("%ld ",a[i]);
        sum=sum+a[i]; }
    if(s>sum)
    printf("NO");
    else {
        if(recurse(a,sum,n-1))
        printf("YES");
        else
        printf("NO"); }
    return 0; }