#include<stdio.h>
#include<strings.h>
void out(long long int i,long long int n,long long int a[]) {
        if(i>n)
            return;
        out(i+1,n,a);
        printf("%d ",a[i]);
        return; }
int main() {
    long long int n;
    int a[1000000000];
    scanf("%lld",&n);
    for(long long int i=0;i<n;scanf("%d",&a[i++]));
    out(0,n-1,a);
    return 0; }