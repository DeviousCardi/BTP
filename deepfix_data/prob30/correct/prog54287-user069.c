#include <stdio.h>
int arr[100]={0};
int n;
int main() {
    int k;
    int max = 0;
    scanf("%d %d", &n,&k);
    for(int a=0; a<n; a++) {
        scanf("%d ",&arr[a]); }
    for(int c=0; c<n; c++) {
        if(max < arr[c]) {
            max = arr[c]; } }
    printf("%d",max);
    return 0; }