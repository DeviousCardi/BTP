#include <stdio.h>
int main(){
    int i, j, n;
    scanf("%d",&n);
    int d = 2*n - 1;
    int a[2*n];
    for(i = 0; i < 2*n; i++) {
        scanf("%d",&a[i]); }
    for(i = 0; i < 2*n; i++){
        for(j = i+1; j < 2*n; j++) {
            if(a[i] == a[j] && (j - i) < d) {
                d = j - i; } } }
    printf("%d",d);
    return 0; }