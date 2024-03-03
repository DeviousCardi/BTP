#include <stdio.h>
int main() {
     int c[201];
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
    int min=2*n;
    int dist;
    for(int i=0;i<n;i++) {
        for(int j=n;j<2*n;j++) {
            if(c[i]==c[j]) {
                dist=j-i;
                  if(min>dist)                                                          {
                      min=dist; } } } }
    printf("%d",min);
    return 0; }