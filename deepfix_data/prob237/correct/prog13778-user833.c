#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i, j;
    int count=0;
    for(i=l; i<l+r; i++){
        for(j=i+1; j<l+r; j++){
            if(arr[i]>arr[j]){
                count=count+1; } } }
    return count; }
int main() {
    int i, j, m;
    int n, k;
    scanf("%d %d", &n, &k);
    for(j=0; j<n; j++){
        scanf("%d", &arr[j]); }
    for (i=0; i<=n-k; i++){
        m=getInversions(i, k);
        if(m<getInversions(i, k)){
            m=getInversions(i, k); } }
    printf("%d", m);
    return 0; }