#include <stdio.h>
int main(){
    int peak[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&peak[i]);
    for(i=1;i<99;i++)  {
        if((peak[i]>peak[i-1])&&peak[i]>peak[i+1])  {
            printf("%d",peak[i]); } }
    return 0; }