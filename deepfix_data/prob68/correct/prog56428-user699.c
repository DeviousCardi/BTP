#include<stdio.h>
int main() {
    int n,p;
    scanf("%d\n",&n);
    int s[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&s[i]); }
    for (int i=0;i<n;i++){
        printf("%d ",s[i]); }
    return 0; }