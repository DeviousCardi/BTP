#include <stdio.h>
int main() {
    int a[100000];
    int n,k;
    int i,j,pos,temp,max;
    scanf("%d %d",&n,&k);
    printf("%d %d ",n,k);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++){
        printf("%d ",a[i]); }
    return 0; }