#include <stdio.h>
int main(){
    int a[99];
    int n;
    scanf("%d",&n);
    int i=0;
    int count=0;
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]); }
    int x=0;
    for(i=1;i<=n;i++)
{    if(x>=1&&x<=n&&x!=i)
{ count++;}
else { break;}}
int t=count+1;
    for(i=0;i<n;i++)
{ int j=0;
for(j=0;j<n;j++)
{ int k=0;
    if (a[i]==a[j]){ k++;}
    else break;
    printf("%d %d",t,k); } }
    return 0; }