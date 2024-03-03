#include <stdio.h>
int main() {
    int n,room[100],count=0,i;
    scanf("%d",&n);
    if(n>1 && n<101)
    for(i=0;i<n;i++) {
        scanf("%d",&room[i]); }
    for(j=0;j<n;j++) {
    for(i=0;i<n;i++) {
        if(room[j]==room[i+]) {
        count=count+1; } } }
    printf("%d",count);
    return 0; }