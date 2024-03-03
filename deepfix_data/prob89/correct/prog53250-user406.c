#include <stdio.h>
int main(){
    int i,j,k,l,sum,m,n,o,p;
    scanf("%d %d",&k,&n);
    int a[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&a[i]); }
    o=(n*(n-1))/2;
    int b[o];
    for(j=0;j<n-1;j++) {
        for(l=j+1;l<=n-1;l++) {
          sum=a[j]+a[l];
          for(m=0;m<=o;m++) {
              b[m]=sum; } } }
    for(p=0;p<=m;p++) {
        if(b[p]==k)
        printf("lucky");
        else
        printf("unlucky"); }
    return 0; }