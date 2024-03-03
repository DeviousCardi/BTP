#include <stdio.h>
int main(){
    int a[150],i,n,s[150],k[150];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    scanf("\n");
    for(i=0;i<n;i++) {
      scanf("%d ",&s[i]);
      k[s[i]]=a[i]; }
    for(i=0;i<n;i++)
    printf("%d ",k[i]);
    printf("end");
    return 0; }