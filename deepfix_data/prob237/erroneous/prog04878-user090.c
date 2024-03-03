#include<stdio.h>
 int max(int a,int b) {
     if(a>b)
      return a;
      else
      return b ;}
int arr[100];
int getInversions(int l,int r)
{  int i,j,count=0,a[10000] ;
    for(i=l;i<l+r-1;i++) {
        for(j=i+1;j<l+r;j++) {
            if(b[i]>b[j])
            count=count+1 ; } }
    return count ; }
int main() {
    int n,k,b[100],i,count[100],l=0,c,sum[100] ;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n-k+1;i++)
    {    l=i;
         r=k ;
        sum[i]=getInversions(l,r); }
    c=sum[0];
    for(i=1;i<n-k+1;i++) {
        c=max(c,sum[i]); }
    printf("%d",c);
    return 0; }