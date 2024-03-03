#include<stdio.h>
int check(int a[],int n,int suma,int sumb,int i) {
    if(i==n&&suma!=sumb)
    return 0;
    if(i==n&&suma==sumb)
    return 1;
    return check(a,n,suma+a[i],sumb,i+1)||check(a,n,suma,sumb+a[i],i+1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(check(a,n,0,0,0))
    printf("YES");
    else
    printf("NO");
    return 0; }