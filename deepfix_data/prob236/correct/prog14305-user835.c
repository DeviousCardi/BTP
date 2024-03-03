#include <stdio.h>
int main() {
    int i,j,n,books[100],k[100],temp,t,h;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&books[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&k[j]); }
    for(h=0;h<n;h++) {
        t=h;
        temp=books[h];
        books[h]=k[t];
        k[t]=temp;
        printf("%d ",books[h]); }
    printf("end");
    return 0; }