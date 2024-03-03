#include <stdio.h>
int main(){
    int n,ar[100],i,j,count;
    count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(j=0;j<n;j++)
    {if ((ar[j+1]>ar[j])&&(ar[j+1]>ar[j+2]))
    count++; }
    printf("%d",count);
    return 0; }