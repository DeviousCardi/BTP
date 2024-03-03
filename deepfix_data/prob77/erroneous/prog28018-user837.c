#include <stdio.h>
int main() {
    int num[100];
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++) {
        scanf("%d",&num[i]);
        max(int num[n]);
        printf("%d",max(int num[n])); }
    printf("end");
    return 0; }
void max(int num[100]) {
    for(i=0,j=0;i<=j;i++,j++)
    num[i]<=num[j+1];
    printf("%d",&num[j+1]); }