#include<stdio.h>
int main() {
    int n1,n2,i;
    scanf("%d%d",&n1,&n2)
    char a[n1],b[n2];
    for(i=0;i<n1;i++) {
        scanf(" %c ",&a[i]); }
    for(i=0;i<n2;i++) {
        scanf(" %c ",&b[i]); }
    for(i=0;i<n1;i++) {
        printf("%d   %d",a[i],b[i]) }
    return 0; }