#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i,j,r,m,count;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i==a[j])
            count=count+1; }
        if(count==2)r=i;
        else if(count==0)m=i; }
  printf("%d\n%d",r,m);
    return 0; }