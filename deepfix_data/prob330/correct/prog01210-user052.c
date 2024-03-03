#include <stdio.h>
int main(){
    int i,n,hop[100],peak=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
     scanf("%d",&hop[i]);
        for(i=2;i<=(n-1);i++) {
             if((hop[i]>=hop[i-1])&&(hop[i]>=hop[i+1]))
                peak++; }
    printf("%d",peak);
    return 0; }