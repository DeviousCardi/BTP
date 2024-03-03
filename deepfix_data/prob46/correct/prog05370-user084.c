#include <stdio.h>
int main(){int m,n,a,e=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(a=2;a<=n/2+1;a++)
    {if(n%a==0)
    e=e+1;}
    if(e==n)
    printf("YES");
    else
    printf("NO");
    return 0; }