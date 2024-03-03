#include <stdio.h>
int main(){
    int n,array[n],element[n];
    scanf("%d",&n);
    for(i=1;i<n;i++)
    scanf("%d",&array[i]);
    element[0]=1;
    printf("%d",t);
    for(j=1;j<=n;j++)
    element[j]=array[element[j-1]];
    for(p=1;p<=n;p++) {
        for(l=1;l<=n;l++)
        if(element[l]==element[p]&&l>p) {
          t=l-1;
          k=l-p;break; } }
    printf("%d %d",t,k);
    return 0; }