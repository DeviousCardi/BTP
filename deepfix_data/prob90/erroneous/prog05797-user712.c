#include <stdio.h>
int main() {
    int i,n,k,ln,c=0;
    int a[500];
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&ln);
        a[ln]=1; }
    for(i=0;i<=250;i++) {
        if(a[i]==1&&a[k-i]==1)
        c++; }
    if(c>0)
    printf("lucky");
    else
    printf("unlucky")
    return 0; }