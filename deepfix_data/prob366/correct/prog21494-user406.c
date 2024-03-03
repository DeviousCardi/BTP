#include <stdio.h>
int min( int a,int b) {
    if(a>b) return b;
    else return a; }
int main() {
    int n;
    scanf("%d",&n);
    int doors[2*n];
    int i;
    for(i=0;i<2*n;i++) {
        scanf("%d ",&doors[i]);
        printf("%d",doors[i]); }
    int diff[n];
    for(i=0;i<n;i++) {
        int j=0;
        while(j!=i && 2*n>j>=n) {
            if(doors[i]==doors[j]) {
                diff[i]=j-i;
                printf("%d",diff[i]); }
            j+=1; } }
    return 0; }