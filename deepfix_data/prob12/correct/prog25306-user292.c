#include <stdio.h>
int main(){
    int n,i,j,k=0,small;
    scanf("%d",&n);
    int a[2*n];
    int diff[2*n];
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<(2*n);i++) {
        diff[i]=0; }
    for(i=0;i<(2*n);i++) {
        for(j=i+1;j<(2*n);j++) {
            if(a[i]==a[j]) {
                diff[k++]=j-i; } } }
    small=diff[0];
    for(i=1;i<(2*n);i++) {
        if(diff[i]!=0) {
            if(small>diff[i]) {
                small=diff[i]; } } }
    printf("%d",small);
    return 0; }