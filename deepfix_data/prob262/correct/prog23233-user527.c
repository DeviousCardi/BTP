#include<stdio.h>
#include<strings.h>
void out(int i,int n,int a[]) {
        if(i>n)
            return;
        out(i+1,n,a);
        printf("%d ",a[i]);
        return; }
int main() {
    long long int n,a[1000000000];
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    out(0,n-1,a);
    return 0; }