#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    scanf("\n");
    int n;
    scanf("%d",&n);
    scanf("\n");
    int a[100];
    for(int i=0;i<100 && a[i]!=EOF;i++)
    {scanf("%d",&a[i]);}
    printf("%d",a[0]);
    return 0; }