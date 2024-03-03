#include <stdio.h>
int main(){
    int d,i,h,k,f;
    int a[500];
    int sum=0;
    scanf("%d",&d);
    scanf("%d",&f);
    for(i=0;i<f;i++) {
        scanf("%d",&a[i]); }
    for(h=0;h<f;h++) {
        for(k=1;k<f;k++) {
            if(a[h]+a[k]==d) {
            sum=sum+1; }
            else {
                sum=0; } } }
    if(sum>=1) {
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }