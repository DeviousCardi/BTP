#include <stdio.h>
int main() {
    int n,i,count=0;
    int high[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&high[i]);
    for(i=0;i<n-2;i++)
        if(high[i]<high[i+1]&&high[i+1]>high[i+2])
            count=count+1;
    printf("%d",count);
    return 0; }