#include <stdio.h>
int main(){
    int a[200];
    int i,m,k,n,min=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(m=0;m<1;m++) {
    for(k=m+1;k<n;k++) {
    if(a[m]==a[k]){
        min=k-m; } } }
    for(m=1;m<n;m++) {
    for(k=m+1;k<n;k++) {
        if(a[m]==a[k]){
            if(min>k-m){
                min=k-m} } }
    printf("%d",min);
    return 0; }