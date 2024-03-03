#include <stdio.h>
int main(){
    int n,l[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&l[i]);
    for(int i=1;i<n-1;i++)
        if(l[i]>l[i+1]&&l[i]>l[i-1])
            count++;
    printf("%d",count);
    return 0; }