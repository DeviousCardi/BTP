#include <stdio.h>
#include<stdlib.h>
int isspace(int a)
{char c=a;
if(c==' ')
return 1;
else
return 0;}
int main() {
	  int k,n,i,j,g[20],e,p,sp;
    int a[20];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
    scanf("%d\n",&a[i]);
    sp=a[i]; }
    scanf("%d\n",&j);
    for(p=0;p<j;p++)
    {scanf("%d\n",&g[p]);}
    for(k=0;k<j;k++)
    {e=g[k];if(n==1)printf("Yes");
    if(e!=0&&e!=n-1)
    {if((a[e])<=(a[e-1])&&(a[e])<=(a[e+1]))
    printf("Yes\n");
    else
    printf("No\n");}
    if(e==0)
    {if(a[e]<=a[e+1])
    printf("Yes\n");}
    if(e==n-1)
    {if(a[e]<=a[e-1])
    printf("Yes\n");}}
	return 0; }