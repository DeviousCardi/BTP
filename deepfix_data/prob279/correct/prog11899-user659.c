#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int array[n+1],occurence[n+1];
    for(i=1;i<=n;i++) {
        scanf("%d",&array[i]); }
    for(i=1;i<=n;i++) {
        occurence[i]=0;
        for(j=1;j<=n;j++) {
            if(array[i]==array[j]) {
                occurence[i]++; } } }
    for(i=1;i<=n;i++) {
        if(occurence[i]==2) {
            printf("%d\n",array[i]);
            break; } }
    for(i=1;i<=n;i++) {
        if(occurence[i]==0) {
            printf("%d",i); } }
    return 0; }