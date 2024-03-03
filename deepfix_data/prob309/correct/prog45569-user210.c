#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    int count[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    for(i=0;i<n;i++) {
        count[i]=0;
        for(j=0;j<n;j++) {
            if(ar[i]==ar[j]) {
                count[i]=count[i]+1; } } }
    for(i=0;i<n;i++) {
        if(ar[i]!=count[i]) {
            printf("No");
            break; } }
    if(ar[i]==count[i]) {
        printf("Yes"); }
    return 0; }