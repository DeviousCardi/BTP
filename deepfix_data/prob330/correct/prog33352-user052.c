#include <stdio.h>
int main(){
    int j=0,i,n,hop[100],ans;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
     scanf("%d",&hop[i]);
     i=0;
    for(;j<n;j++) {
        i=i+1;
        for(;i<n;i++) {
             if((hop[i]>=hop[i-1])&&(hop[i]>=hop[i+1]))
             break; } }
    ans=(j+1);
    printf("\n%d",ans);
    return 0; }