#include <stdio.h>
int main() {
    int i,j,n,books[100],k[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&books[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&k[j]); }
    temp=i;
    i=k[j];
    k[j]=temp;
    printf("%d %d",i,k[j]);
    printf("end");
    return 0; }