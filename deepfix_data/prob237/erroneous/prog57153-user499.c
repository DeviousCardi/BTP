#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,a[l],count=0;
    for(i=0;i<l;i++) {
        for(j=i+1;j<r;j++)
        { if(a[i]>a[j])
           count++ } }
    return count; }
int main()
{   int n,k,p,m=0;
    scanf("%d\n%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    { for(j=0;j<n-k+1;j+) {
       p=getInversions(n,k); }
        if(p>max)
        max=p;
    }  printf("%d",p);
    return 0; }