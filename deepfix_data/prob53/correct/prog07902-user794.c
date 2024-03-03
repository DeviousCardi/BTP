#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,b;
    int c;
    scanf("%d",&c);
    for(i=0;i<n-1;i++){
        scanf("%d",&b);
        c=c-b; }
    printf("%d",c);
    return 0; }