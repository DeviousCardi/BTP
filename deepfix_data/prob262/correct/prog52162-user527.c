#include<stdio.h>
#include<strings.h>
void out(int a[],int n,int N) {
    if(n==N) {
            printf("%d",a[n-1]);
            N--;
            return; }
    out(a,n+1,N); }
int main() {
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    out(a,0,n);
    return 0; }