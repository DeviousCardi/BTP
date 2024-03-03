#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,s=0;
    int j[100];
    for(i=0; i<n; i++) {
        scanf("%d",&j[i]); }
    for(i=0; i<=n; i++) {
    if((j[i-1]<j[i]) &&(j[i]>j[i+1])) {
        s=s+1; } }
    printf("%d",s);
    return 0; }