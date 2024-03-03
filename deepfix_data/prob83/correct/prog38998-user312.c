#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int num[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    int d;
    scanf("%d",&d);
    for(int j=0;j<n;j++) {
        printf("%d ",num[(j+(d%n))%n]); }
return 0; }