#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,k=0,small;
    scanf("%d",&n);
    int a[2*n];
    int diff[n];
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        diff[i]=0; }
    for(i=0;i<(2*n);i++) {
        for(j=0;j<(2*n);j++) {
            if(a[i]==a[j]) {
                diff[k++]=abs(j-i);
                break; } } }
    small=diff[0];
    for(i=1;i<n;i++) {
        if(small>diff[i]) {
            small=diff[i]; } }
    printf("%d",small);
    return 0; }