#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i, j;
    int count=0;
    for(i=l; i<l+r; i++){
        for(j=i+1; j<l+r; j++){
            if(a[i]>a[j]){
                count=count+1; } } }
    return count; }
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", a[i]); }
    for (i=0; i<=n-k; i++){
        getInversion(i, k);
        m=getInversion(i, k);
        if(m<getInversion(i, k)){
            m=getInversion(i, k); } }
    printf("%d", m);
    return 0; }