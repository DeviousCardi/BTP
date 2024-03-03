#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int n,inv=0,i,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    inv++;
    printf("%d",inv);
    return 0; }
int main() {
    int n,l,r,j,max;
    scanf("%d\n%d",&n,&l);
    int a[n-l+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i+l-1<=n;i++) {
        for(j=i;j<i+l;j++)
        a[i]=getInversions(l,r); }
    max=a[0];
    for(i=0;i<n-l+1;i++)
    if(a[i]>max)
    max=a[i];
    printf("%d",max);
    return 0; }