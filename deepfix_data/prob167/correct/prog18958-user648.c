#include<stdio.h>
#include<string.h>
int main() {
    int i,j,n,a[10000][10],b[10];
    char c[10];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%s",c);
        for(j=0;j<strlen(c);j++) {
            a[i][j]=c[strlen(c)-j-1]-48;
            printf("%d",a[i][j]); } }
    return 0; }