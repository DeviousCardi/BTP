#include <stdio.h>
int search(int a[],long int n,long int s);
int main() {
    int q,a[1000000],i;
    long int n,s;
    scanf("%ld %ld\n",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    q = search(a,n,s);
    if(q==1)
    printf("YES");
    else
    printf("NO"); }
int search(int a[1000000],long int n,long int s) {
    if(n==0)
    return 0;
    if(s==0)
    return 1;
    return (search(a,n-1,s-a[n-1])|| search(a,n-1,s)); }