#include <stdio.h>
int main() {
    int n,i,count1=0;
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    int count[n];
    for(i=0;i<n;i++) {
        count[a[i]]++; }
    for(i=0;i<n;i++) {
        if(count[i]==i) {
            count1++; } }
    if(count1==n) {
    printf("Yes"); }
    else {
    printf("No"); }
    return 0; }