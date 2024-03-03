#include <stdio.h>
int main(){
    int n,k,i,j,f=0;
    scanf("%d %d",&k,&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if((a[i]+a[j])==k)
                f=1;
    if(f==0)
        printf("unlucky");
    else if(f==1)
        printf("lucky");
    return 0; }