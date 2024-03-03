#include <stdio.h>
int main(){
    int a[150],i,n,s[150],k[150];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++) {
    scanf("%d ",&s[i]);
    k[i]=a[s[i]]; }
    for(i=0;i<n;i++)
    printf("%d ",k[i]);
    printf("end");
    return 0; }