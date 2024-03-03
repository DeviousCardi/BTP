#include<stdio.h>
int main() {
    int n,i,j,c=0;
    scanf("%d,",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d,",&a[i]);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(a[i]==a[j])
            c++; }
        if(a[i]==c) {
            printf("No");
            return 0; }
        else {
            printf("Yes");
            return 0; } } }