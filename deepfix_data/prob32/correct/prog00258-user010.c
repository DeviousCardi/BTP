#include <stdio.h>
#include <stdlib.h>
int main() {
	int kap = 0;
    int n , i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(i==0) {
            if(a[0]<a[1]) {
                kap = 1;
                break; } }
    if(i==n-1) {
    if(a[n-1]<a[n-2]) {
    kap =1 ;
    break; } }
    if((a[i]<a[i+1])&&(a[i]<a[i-1])) {
    kap = 1;
    break; } }
    if(kap==1) {
    printf("Yes"); }
    else {
    printf("No"); }
    return 0 ; }