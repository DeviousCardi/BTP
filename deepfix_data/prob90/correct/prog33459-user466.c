#include <stdio.h>
int main(){
    int i,j,k,n,s;
    int a[1000];
    int count=0;
    scanf("%d ",&k);
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    scanf(" %d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        s=a[i]+a[j];
        if(s==k); {
            count++;
            break; } } }
    if(count!=0)
    printf("lucky");
    if(count==0)
    printf("unlucky");
    return 0; }