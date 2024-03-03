#include <stdio.h>
int main() {
    int n,i,count,flag;
    scanf("%d",&n);
    int occurence[100],array[n*n];
    flag=0;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]);
        if(array[i]==',') {
            i--;
            continue; }
        else {
            flag=flag+1;
            occurence[array[i]]=occurence[array[i]]+flag; } }
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