#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    char num[n];
    for(i=0;i<n;i++)
    scanf("%c",&num[i]);
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++) {
        num[i]=num[(i+d)%n];
        printf("2%d",num[i]); }
    return 0; }