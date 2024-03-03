#include <stdio.h>
int main(){
    int k,count,i,j,n;
    count=0;
    scanf("%d",k);
    scanf("%d",n);
    int str[n];
    for(i=0;i<n;i++)
    scanf("%d",str[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        {if((i!=j)&&(a[i]+a[j]=k))
        count++;} }
    if(count!=0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }