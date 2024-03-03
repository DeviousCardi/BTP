#include <stdio.h>
int main(){
    int n, a[100],b[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {scanf("%d ",&a[i]);}
    for(int i=0;i<n;i++)
    {scanf("%d ",&b[i]);}
    int c[n];
    for(int i=0;i<n;i++)
    {c[b[i]]=a[i];}
    for(int i=0;i<n;i++)
    {printf("%d ",c[i]);}
    printf("end");
    return 0; }