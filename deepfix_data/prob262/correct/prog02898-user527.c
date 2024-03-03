#include<stdio.h>
#include<strings.h>
long long int a[10000];
void out(long long int i,long long int n) {
        if(i>n)
            return;
        out(i+1,n);
        printf("%d ",a[i]);
        return; }
int main() {
    long long int n;
    scanf("%lld",&n);
    for(long long int i=0;i<n;scanf("%d",&a[i++]));
    out(0,n-1);
    return 0; }