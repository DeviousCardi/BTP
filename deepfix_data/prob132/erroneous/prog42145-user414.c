#include <stdio.h>
int main() {
    int n,count,i,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        m=a[i];
        count=0;
        for(j=0;j<n;j++) {
            if(a[j]==m) {
                count++; }
            else {
                continue; } }
        if(count==m) {
            continue; }
        else {
            break; } }
    if(i==n) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }