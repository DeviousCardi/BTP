#include <stdio.h>
int main(){
    int k, n, i, j, k, m;
    scanf("%d\n", &k);
    scanf("%d\n", &n);
    int arr[n];
    for(i=0; i<=n; i++){
        scanf("%d", &arr[i]); }
    for(j=0; j<=n; j++){
        for(k=1; k<=n; k++){
            if(j!=k){
                m=arr[k]+arr[j] } } }
    if(m==k){
        printf("lucky"); }
    else { printf("unlucky");
    return 0; }