#include <stdio.h>
int main() {
    int l,n,a[1000],i,j,flag=0;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    for(j=0;j<l;j++) {
        if
        ({
            for(i=0;i<l;i++)
            j==a[i]; }
        && {
            for(i=0;i<l;i++)
            l-j==a[i];
        })
        flag=1;
        break; }
    if (flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }