#include <stdio.h>
int main(){
    int n, i, j, k, sum, min, count1, count2;
    scanf("&d", &n);
    int a[2*n];
    for(i=0; i<(2*n); i++){
        scanf("%d", &a[i]); }
    for(i=1; i<=n; i++){
        for(j=0; j<n; j++){
            if(a[j]==i){
                count1=j; } }
        for(k=n; k<(2*n); k++){
            if(a[k]==i){
                count2=k; } }
        b[i]=count2-count1; }
    min=b[1];
    for(i=2; i<=n; i++){
        if(b[i]<min){
            min=b[i]; } }
    printf("%d", min);
    return 0; }