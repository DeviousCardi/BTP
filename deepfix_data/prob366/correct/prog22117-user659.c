#include <stdio.h>
void min(int a[],int n) {
    int min=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]<min) {
            min=a[i]; } }
    printf("%d",min);
    return; }
int main() {
    int n,diff[n],a[2*n],i,j;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n&&j!=i;j++) {
            if(a[i]==a[j]) {
                diff[a[i]]=abs(i-j); } } }
    min(diff,n);
    return 0; }