#include <stdio.h>
int main(){
    int i,j,k,n,s;
    int a[1000];
    int count=0;
    scanf("%d",&k);
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    scanf(" %d",&a[i]);
    s=0;
    while(s==k) {
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        s=a[i]+a[j]; } } }
    if(s==k)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }