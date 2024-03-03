#include<stdio.h>
int main() {
    int m,n,i,j,heap[100];
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&heap[i-1]);
            sum=sum+heap[i-1]; }
        printf("%d\n",sum);
        printf("%d\n",heap[0]);
        printf("\n"); }
    return 0; }