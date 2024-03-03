#include <stdio.h>
int main() {
    int n,z[n],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("% d",&z[i]);
    for(j=0;j<n;j++)
    {for(k=0;k<n;k++)
    {if ((z[k]==z[j])&&(k!=j))
    printf("YES");break;}}
	return 0 }