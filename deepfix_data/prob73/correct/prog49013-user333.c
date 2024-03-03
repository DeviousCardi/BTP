#include <stdio.h>
int main() {
    int max=0;
    int n,m;
        scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
       int y=0;
       for(int j=0;j<m;j++) {
               int x;
               scanf("%d",&x);
               y+=x; }
       if(y>max)
           max=y; }
    printf("%d",max);
    return 0; }