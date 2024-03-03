#include <stdio.h>
int main() {
     int c[401];
    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=2*n;i++) {
        scanf("%d",&c[i]); }
    int min=2*n;
    int dist;
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=2*n;j++) {
            if(c[i]==c[j]) {
                dist=j-i;
                  if(min>=dist)                                                          {
                      min=dist;
                      break; } } } }
    printf("%d",min);
    return 0; }