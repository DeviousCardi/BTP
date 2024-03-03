#include <stdio.h>
int main(){
    int n,k,i,j,f=0;
    scanf("%d %d",&k,&n);
    if((n>100)||(k%2==0))
        return 0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if((i+j)==k)
                f=1;
    if(f==0)
        printf("unlucky");
    else
        printf("lucky");
    return 0; }