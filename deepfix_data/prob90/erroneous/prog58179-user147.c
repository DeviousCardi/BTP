#include <stdio.h>
int main(){
    int k,n,a[500],b[500],m=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {b[i]=0;}
    for(int i=0;i<n;i++)
    {scanf("%d ",&a[i]);}
    {for(int j=0;j<n;j++)
    {b[a[j]]++;}
    for(int i=0;i<n;i++)
    {if(b[i]!=0&&b[k-i]!=0)
    m++; }
    if(m!=0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }