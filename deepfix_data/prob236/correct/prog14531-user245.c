#include <stdio.h>
int main(){
    int a[150],i,n,s[150];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d ",&s[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[s[i]]);
    printf("end");
    return 0; }