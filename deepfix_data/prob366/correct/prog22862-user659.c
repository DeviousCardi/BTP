#include <stdio.h>
#include <stdlib.h>
void min(int a[],int n) {
    int min=a[1];
    for(int i=2;i<=n;i++) {
        if(a[i]<min) {
            min=a[i]; } }
    printf("%d",min);
    return; }
int main() {
    int n;
    scanf("%d",&n);
    int diff[n],a[2*n],i,j,k;
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=0;j<2*n&&j!=i;j++) {
            if(a[i]==a[j]) {
                diff[a[i]]=abs(i-j); } } }
    return 0; }