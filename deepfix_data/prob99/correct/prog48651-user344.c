#include<stdio.h>
int max(int a, int b){
    if(a>b) return a;
    else return b; }
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); }
    int count=0, k=1;
    for(i=0; i<n; i++){
        for(j=k; j<n; j++){
            if(max(a[j],a[i])==a[j]){
                count++;
                int k=j;break; } } }
    printf("%d", count);
    return 0; }