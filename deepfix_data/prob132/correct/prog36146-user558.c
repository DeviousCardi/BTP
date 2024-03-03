#include<stdio.h>
int main() {
    int n,i,j,c=0;
    scanf("%d,",&n);
    int a[n];
    for(i=1;i<=n-1;i++) {
        scanf("%d,",&a[i]);
        for(j=i+1;j<=n;j++){
        if(a[i]==a[j])
        c++; } }
    for(i=1;i<=n-1;i++){
     if(c==i) {
            printf("Yes");
            return 0; }
        else {
            printf("No");
            return 0; } } }