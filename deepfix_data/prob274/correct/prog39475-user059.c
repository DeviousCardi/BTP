#include <stdio.h>
int main() {
    int a[20],b[50],n,k=0,i,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    i=0;
    for(j=1;j<50;j++) {
        if(i<n) {
             a[i]=k;
             b[j]=a[k];
             i++; }
        else
         i=0; }
    for(j=0;j<50;j++)
    printf("%d",b[j]);
    return 0; }