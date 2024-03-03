#include <stdio.h>
int main(){
    int n, a[100],b[100],k;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {scanf("%d ",&a[i]);}
    for(int i=0;i<n;i++)
    {scanf("%d ",&b[i]);}
    for(int j=0;j<n;j++)
    {int i=0;
        while(b[i]!=j)
        {if(b[i]==j)
         {k=i;
         break;}
         else
         i++; }
    printf("%d ",a[k]); }
    printf("end");
    return 0; }