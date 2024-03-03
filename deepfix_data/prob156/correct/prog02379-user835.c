#include<stdio.h>
int main() {
    int m,n,i,j,heap[100],k;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&heap[j-1]);
            sum=sum+heap[j-1];
            k=sum; } }
    if(k>sum) {
        printf("%d\n",k); }
    if(k<sum) {
        printf("%d\n",sum); }
    return 0; }