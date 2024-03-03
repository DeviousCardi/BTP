#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], b[k+1];
    for (int i=0; i<n; i++){
        scanf("%d", a+i); }
    for(int i=0; i<=k; i++){
        b[i]=0; }
    for (int i=0; i<=k; i++){
        for (int j=0; j<n; j++){
            if(a[j]==i){
                b[i]++; } } }
    for (int i=0; i<=k; i++){
        for (int j=0; j<b[i]; j++){
            printf ("%d ", i); } } }