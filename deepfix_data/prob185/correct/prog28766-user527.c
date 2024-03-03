#include<stdio.h>
int ok=0;
int trans(int n, int a[], int sum) {
    if(sum<0) return 0;
    for(int i=0;i<n;i++) {
            if(sum==a[i]) return 1; }
    for(int i=0;i<n;i++)
        ok+=trans(n,a,sum-a[i]);
    return 0; }
int main() {
    int n,sum,a[100];
    scanf("%d%d",&n,&sum);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    printf("%s",(trans(n,a,sum)>0)?"YES":"NO");
    return 0; }