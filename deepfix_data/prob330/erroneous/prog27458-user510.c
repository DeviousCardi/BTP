#include <stdio.h>
int main(){
    int a;
    int n[100];
    int s=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {scanf("%d",&n[i]);}
    for(i=1;i<a;i++)
    {if((n[i]>n[i+1])&&(n[i]>n[i-1]))
    s=s+1}
    printf("%d",s);
    return 0; }