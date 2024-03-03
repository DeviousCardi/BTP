#include <stdio.h>
int search(int a[],long int n,long int s);
int main() {
    int a[1000000],i;
    long int n,s;
    scanf("%ld %ld\n",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    return search(a,n,s);
    return 0; }
int search(int a[1000000],long int n,long int s) {
    if(n==0)
    return 0;
    else
    return (int search(a[],n-1,s-a[n-1])||int search(a[],n-1,s); }