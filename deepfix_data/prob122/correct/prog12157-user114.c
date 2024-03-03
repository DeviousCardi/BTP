#include <stdio.h>
int main(){int n,i,j,a;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for (j=1;j<=n;j++)
    {scanf("%d",&a);
    if(i==j) {if (a!=1) {printf("not");break;}}
    if(i!=j){if (a!=0) printf("not");break;} }
}printf("yes");
    return 0; }