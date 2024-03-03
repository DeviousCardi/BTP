#include <stdio.h>
int main(){
    int i,n,a,b,c,d,e;
    scanf("%d%d%d",&n,&a,&b,&c,&d,&e);
     for(i=1;i<=n;i++)
     if(a>b>c>d>e)
       printf("%d\n",a,b,c,d);
    printf("end");
    return 0; }