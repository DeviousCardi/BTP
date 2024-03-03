#include <stdio.h>
int main(){
    int n,k,i,j,f=0;
    scanf("%d %d",&k,&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if((i+j)==k&&i!=j)
                f=1;
    if(f==0)
        printf("unlucky");
    else if(f==1)
        printf("lucky");
    return 0; }