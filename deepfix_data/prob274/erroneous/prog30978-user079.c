#include <stdio.h>
int main(){
    int n,i,count=0,j=1,t=0,k;
    scanf("%d",&n);
    int a[n+2],ti[n+2],tf[n+2],m,minT,store,l;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    while(count<2) {
        i=a[j];
        for(m=1;m<=n;m++) {
          if(i==a[m])
            {  if(count==0)
            ti[m]=t;
            if(count==1)
            tf[m]=t;
               count++; }
        j=i;
        t++; }
    minT=tf[1];
    for(l=1;l<=n;l++) {
      if(minT>=tf[l]) {
            minT=tf[l];
            store=l; } }
    k=tf[store]-ti[store];
    printf("%d %d",minT,k);
    return 0; }