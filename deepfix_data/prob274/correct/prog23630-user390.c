#include <stdio.h>
int main() {
    int n,room[100],count=0,i;
    scanf("%d",&n);
    if(n>1 && n<101)
    for(i=0;i<n;i++) {
        scanf("%d",&room[i]); }
    for(i=0;i<n;i++) {
        if(room[1]==room[i+2]) {
        count=count+1; } }
    printf("%d",count);
    return 0; }