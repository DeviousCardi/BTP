#include <stdio.h>
int main() {
    int n,m,a,b,sum=0,t=0;
        scanf("%d %d",&n,&m);
    int i;
        for(i=1;i<m+1;i++)
           {scanf("%d",&a);
               sum=sum+a; }
    int j;
        for(j=0;j<m;j++)
           {scanf("%d",&b);
               t=t+b; }
     if(sum>t){printf("%d",sum);}
    else
    printf("%d",t);
    return 0; }