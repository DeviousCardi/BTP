#include <stdio.h>
int main() {
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count++; } }
    printf("%d",count);
    for(i=0;i<n;i++) {
        if(a[i]==count){
        printf("yes"); }
        break; {
        else{
            printf("No"); } }
    return 0; }