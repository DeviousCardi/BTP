#include <stdio.h>
int main(){
    int j,i,n,hop[100],p[100],ans;
    scanf("%d ",&n);
    for(i=0;i<=n;i++)
     scanf("%d",&hop[i]);
     i=1;
    for(j=0;j<=(n/2);j++) {
        i=i+1;
        for(i;i<n;i++) {
             if((hop[i]>=hop[i-1])&&(hop[i]>=hop[i+1]))
             break; } }
    ans=(j+1);
    printf("\n%d",ans);
    return 0; }