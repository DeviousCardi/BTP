#include <stdio.h>
int main(){
    int n;
    int x=200;
    int i, j;
    int arr[200];
    scanf("%d", &n);
    for (i=0;i<2*n;i++) {
        scanf("%d", &arr[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(arr[i]==arr[j]) {
                if(j-i<=x) {
                    x =j-i; } } } }
    printf("%d", x);
    return 0; }