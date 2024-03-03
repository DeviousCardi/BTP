#include <stdio.h>
int main() {
    int n,i,count;
    scanf("%d",&n);
    int occurence[100],array[n*n];
    for(i=0;i<n;i++) {
        occurence[array[i]]=0;
        scanf("%d",&array[i]);
        if(array[i]==',') {
            i--;
            continue; }
        else {
            occurence[array[i]]=occurence[array[i]]+1; } }
    count=0;
    for(i=0;i<n;i++) {
        if(occurence[array[i]]==array[i]) {
            count=count+1; }
        printf("%d",count); }
    if(count==n) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }