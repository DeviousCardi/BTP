#include <stdio.h>
int main(){
    int i,n,a,b,c,d,e,f;
    scanf("%d%d%d",&n,&a,&b,&c,&d,&e,&f);
     for(i=1;i<=n;i++)
     if(a>b>c>d>e>f)
       a++;
       printf("%d\n",a);
    printf("end");
    return 0; }