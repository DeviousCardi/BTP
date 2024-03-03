#include <stdio.h>
int main() {
    int luck,n,i,j,a[100],c=0;
    scanf("%d\n",&luck);
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i]+a[j])==luck)
            c++; } }
    if(c>=1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }