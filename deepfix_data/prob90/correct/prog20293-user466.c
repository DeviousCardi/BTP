#include <stdio.h>
int main(){
    int i,j,k,n,s;
    int a[1000];
    scanf("%d ",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(s==k) {
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        s=a[i]+a[j];
        if(s==k);
        break; } } }
    if(s==k)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }