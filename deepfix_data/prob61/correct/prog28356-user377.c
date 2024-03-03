#include<stdio.h>
int main() {
    int n,k,i,total=0,oldcount;
    scanf("%d%d",&n,&k);
    int count[k+1],out[n],a[n];
    for(i=0;i<=k;i++)
      count[i]=0;
    for(i=0;i<n;i++) {
          scanf("%d",&a[i]);
          count[a[i]]++; }
      for(i=0;i<=k;i++)
        printf("%d ",count[i]);
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(i=0;i<n;i++) {
        out[count[a[i]]]=a[i]; }
    for(i=0;i<n-1;i++)
        printf("%d ",out[i]);
    printf("%d",out[i]);
    return 0; }