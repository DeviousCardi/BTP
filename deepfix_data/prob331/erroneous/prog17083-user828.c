#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            scanf("%d", &m);
            if(i==j&&m==1) {
               continue;
               printf("i"); }
            else
              break; } }
    return 0; }