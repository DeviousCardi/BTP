#include <stdio.h>
int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int occuernce[n],array[n];
    for(i=0;i<n;i++) {
        printf("%d\n",i);
        scanf("%d",&array[i]);
        if(array[i]==',') {
            i--;
            continue; }
        else {
            occuernce[array[i]]=occuernce[array[i]]+1; } }
    for(i=0;i<n;i++) {
        if(occuernce[array[i]]==array[i]) {
            count=count+1; } }
    printf("%d",count);
    if(count==n)
    return 0; }