#include <stdio.h>
int main(){
    int j,i,n,hop[100],,peak=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
     scanf("%d",&hop[i]);
        for(i=1;i<n;i++) {
             if((hop[i]>=hop[i-1])&&(hop[i]>=hop[i+1]))
                peak++; } }
    printf("%d",peak);
    return 0; }