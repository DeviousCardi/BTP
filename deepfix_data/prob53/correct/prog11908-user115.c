#include<stdio.h>
long long diff(long long a[],int pos){
    if(pos==0){
        return a[pos]; }
    return diff(a,pos-1)-a[pos]; }
int main() {
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    printf("%lld",diff(a,n-1));
    return 0; }