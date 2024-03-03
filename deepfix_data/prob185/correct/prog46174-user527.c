#include<stdio.h>
int ok=0;
int trans(int n, int a[], int sum, int i) {
    if(sum<0) return 0;
    for(;i<n;i++) {
            if(sum==a[i]) return 1; }
    for(;i<n;i++)
        ok+=trans(n,a,sum-a[i],i);
    return 0; }
int main() {
    int n,sum,a[100];
    scanf("%d%d",&n,&sum);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    trans(n,a,sum,0);
    printf("%s",(ok>0)?"YES":"NO");
    return 0; }