#include<stdio.h>
#include<strings.h>
int reverse(int N,int a[]) {
    if(N<=0)
    return 0;
    printf("%d",a[N-1]);
    return reverse(int N-1,int a[]); }
int main() {
    int k;
    int N,a[N],i;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
    scanf("%d",&a[i]);
    k=reverse(N,a[N]);
    return 0; }