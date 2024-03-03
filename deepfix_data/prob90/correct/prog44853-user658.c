#include <stdio.h>
int main(){
    int l[1000],k,n,i,j,f=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&l[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++)
        { if(l[i]+l[j]==k)
        {  f=1;
        break; }
        if(f==1)
        break; } }
    if(f)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }