#include <stdio.h>
int main(){
    int n,a,i,t=0,k;
    int in[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&in[i]);
    for(i=0;i<n;i++)
        { t=t+1;
            if(in[i]==1)
                printf("%d",t);}
    for(i=0;i<n;i++)
        {a=in[i];
             for(i=0;i<n;i++)
            { k=k+2;
                if(a==in[i])
                    b=in[i];}}
    printf(" %d",b);
    return 0; }