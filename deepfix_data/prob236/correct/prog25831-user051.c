#include <stdio.h>
int main(){
    int n,i,book[100],ordr[100],new[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&ordr[i]); }
    for(i=0;i<n;i++) {
        new[i]=book[ordr[i]]; }
    printf("end");
    return 0; }