#include <stdio.h>
int main() {
    int l,n,a[1000],i,j,k,flag=0;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    for(i=0;i<l;i++) {
        for(j=0;j<l;j++) {
            for(k=0;k<l;k++)
            if(i==a[j]&&l-i==a[k])
            flag=0; } }
    if (flag==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }