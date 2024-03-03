#include <stdio.h>
int main(){
    int n,r[100],d[100],cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&r[i]);
    for(int i=0;i<n;i++) {
        while(cnt!=1)
        { d[i]=r[r[i]];
          if(d[i]==d[1])
          cnt++; }
        if(cnt==1)
        {t=i-1;
        k=t-1; } }
    printf("%d  %d",t,k);
    return 0; }