#include <stdio.h>
int main() {
    int n,k,i,j,l;
    int list[999999999];
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
    for(l=0;l<n;l++) {
        for(j=0;j<n;j++) {
          if(list[l]==k-list[j]) {
              printf("lucky");
             return 0; } } }
    if(l==n)
    printf("unlucky");
    return 0; }