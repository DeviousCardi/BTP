#include<stdio.h>
int main() {
    int m,n,i,j,heap;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&heap);
            sum=sum+heap; }
        printf("%d\n",sum);
        printf("\n"); }
    return 0; }