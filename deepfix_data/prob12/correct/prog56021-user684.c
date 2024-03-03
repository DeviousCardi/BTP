#include <stdio.h>
int main() {
    int n,count,x;
    int a[200];
    int b[100];
    int diff;
    scanf("%d\n",&n);
    diff=2*n;
    for(int i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(int i=0;i<n;i++) {
        b[i]=i+1; }
    for(int i=0;i<n;i++) {
        count=0;
        for(int k=0;k<2*n;k++) {
            if(a[k]==b[i]) {
                x=k;
                break; } }
        for(int j=x+1;j<2*n;j++) {
            count++;
            if(a[j]==b[i]) {
                break; } }
        if(count<diff)
                diff=count; }
    printf("%d",diff);
    return 0; }