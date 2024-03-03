#include <stdio.h>
int main() {
    int n,i,j,count,inp;
    scanf("%d",&n);
    int occurence[100],array[n];
    for(i=0;i<n;i++) {
        scanf("%d",&inp);
        if(inp==',') {
            i--; }
        else {
            array[i]=inp; } }
    for(i=0;i<n;i++) {
        occurence[array[i]]=1;
        for(j=0;j<n;j++) {
            if(array[i]==array[j]) {
                occurence[array[i]]++; } } }
    count=0;
    for(i=0;i<n;i++) {
        if(occurence[array[i]]==array[i]) {
            count=count+1; } }
    printf("%d\n",count);
    if(count==n) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }