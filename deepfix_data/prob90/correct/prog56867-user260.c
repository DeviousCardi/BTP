#include <stdio.h>
int main() {
    int n,k,i,j;
    int list[1000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        list[i]=getchar;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
          if(list[i]==k-list[j]) {
              printf("lucky");
             return 0; } } }
    if(i==n)
    printf("unlucky");
    return 0; }