#include<stdio.h>
#include<math.h>
int prdct(int p,int n,int l,int a[l]) {
    p=p*a[l];
    if((n-1)==0)
    return p;
    return prdct(p,n,,l-1,a[l-1]); }
int main() {
    int n,i,p=0,d=0,l=0;
    int a[pow(10,9)];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=1;
    l=n-1;
    d=prdct(p,a[l],n,l);
    printf("%d",d);
    return 0; }