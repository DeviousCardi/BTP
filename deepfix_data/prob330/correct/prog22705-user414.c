#include <stdio.h>
int main() {
    int n,i,p=0;
    scanf("%d",&n);
    int hght[n];
    for(i=0;i<n;i++) {
        scanf("%d",&hght[i]); }
    for(i=1;i<n-1;i++) {
        if((hght[i]>hght[i-1])&&(hght[i]>hght[i+1])) {
            p=p+1; }
        else {
            continue; } }
    printf("%d",p);
    return 0; }