#include <stdio.h>
int main(){
    int i;
    int n;
    scanf("%d\n", &n);
    int a[n];
    int count = 0;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=1;i<(n-1);i++){
        if((a[i]>a[i+1])&&(a[i]>a[i-1])){
            count = count + 1; } }
    printf("%d", count);
    return 0; }