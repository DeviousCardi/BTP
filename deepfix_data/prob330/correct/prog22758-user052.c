#include <stdio.h>
int main(){
    int j=0,i,n,hop[100],peak[100],ans,p=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
     scanf("%d",&hop[i]);
     i=0;
    for(;j<n;j++) {
        i=i+1;
        for(;i<n;i++) {
             if((hop[i]>=hop[i-1])&&(hop[i]>=hop[i+1])) {
                p++;
                break; } } }
    ans=p;
    printf("\n%d",ans);
    return 0; }