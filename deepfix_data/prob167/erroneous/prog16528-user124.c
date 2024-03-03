#include<stdio.h>
int add(int a[],int n,int sum){
        sum=sum+a[n];
        if (n==0) return sum;
        return add(a,n-1,sum); }
int main() {
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    s=add(a[n],n,sum);
    printf("%d",s);
    return 0; }