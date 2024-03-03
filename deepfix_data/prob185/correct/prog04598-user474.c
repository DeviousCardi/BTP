#include <stdio.h>
int recurse(int a[],long s,long i) {
    if(s==0)
    return 1;
    if(s!=0&&i<0)
    return 0;
    else {
        return (recurse(a,s-a[i],i-1)||recurse(a,s,i-1)); } }
int main() {
    long n,s,i,sum=0;
    scanf("%ld %ld ",&n,&s);
    int  a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",a[i]);
        sum=sum+a[i]; }
    if(s>sum)
    printf("NO");
    else {
        if(recurse(a,s,n-1))
        printf("YES");
        else
        printf("NO"); }
    return 0; }