#include <stdio.h>
int main(){
    int i, j, n;
    scanf("%d",&n);
    int d = 2n - 1
    int a[2n];
    for(i = 0; i < 2n; i++) {
        scanf("%d",&a[i]); }
    for(i = 0; i < n; i++){
        for(j = n; j < 2n; j++) {
            if(a[i] == a[j] && (j - i) < d) {
                d = j - i; } } }
    printf("%d",d);
    return 0; }