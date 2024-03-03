#include <stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d", &n);
    int a[2*n];
    for(i=0;i<(2*n);i++) {
        scanf("%d", &a[i]); }
    int min = 1000;
    for(i=0;i<(2*n);i++) {
        x = 1000;
        for(j=(i+1);j<(2*n);j++) {
            if(a[i] == a[j]) {
                x = j - i; } }
        if(x < min) {
            min = x; } }
    printf("%d", min);
    return 0; }