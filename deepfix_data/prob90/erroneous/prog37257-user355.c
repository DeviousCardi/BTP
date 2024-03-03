#include <stdio.h>
int main(){int i,c,b,d=0,a[500];
    scanf("%i%i",&c,&b);
    for(i=0;i<b;++i)
    scanf("%i",&a[i]);
    for(i=0;i<b-1;++i)
    {for(j=i+1;j<b;++j)
    if(a[i]+a[j]==c){d=1;break;}}
    if(d==1)printf("lucky");
    else printf("unlucky");
    return 0; }