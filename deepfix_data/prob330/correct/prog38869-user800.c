#include <stdio.h>
int main(){
    int n;
    int i;
    int count=0;
    scanf("%d",&n);
    int land[n];
    for(i=0;i<n;i++)
        scanf("%d",&land[i]);
    for(i=1;i<n-1;i++)
        if( land[i]>land[i-1] && land[i]>land[i+1] )
            count++;
    printf("%d",count);
    return 0; }