#include <stdio.h>
#include <string.h>
int main() {
    int k,n;
    scanf("%d\n %d",&k,&n);
     int a[n];
    int i=1;
    for(i=1;i<=n;i++)
    {scanf("%d",&a[i]);
   if
   (k==a[i]+n)
    printf("lucky");
    else
    printf("unlucky");}
    return 0; }