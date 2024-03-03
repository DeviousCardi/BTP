#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(int j=0;j<n;j++) {
        int sum=0;
        for(int k=0;k<n;k++) {
            if(a[j]==a[k]) {
            sum=sum+1; } }
    if(sum!=a[j]) {
    printf("No");
    return 0; } }
    printf("Yes");
    return 0; }