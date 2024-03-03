#include <stdio.h>
int main() {
    int door[100],heap[100],k,l ,i,j;
    scanf("%d %d",&i,&j);
    for(k=0;k<i;i++) {
    scanf("%d",&door[k+1]); }
    for(l=0;l<j;j++) {
    scanf("%d",&heap[l]); }
    printf("%d",door[1]);
    return 0; }