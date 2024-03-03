#include <stdio.h>
int main(){
    int n,i;
    int a[100];
    int k[100];
    int s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    k[s[i]]=a[i];
    printf("%d",k[i]);
    printf("end");
    return 0; }