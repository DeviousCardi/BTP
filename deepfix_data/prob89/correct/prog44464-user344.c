#include <stdio.h>
int main(){
    int k, n, i, j, s, m;
    scanf("%d\n", &k);
    scanf("%d\n", &n);
    int arr[n];
    for(i=0; i<=n; i++){
        scanf("%d", &arr[i]); }
    for(j=0; j<=n; j++){
        for(s=1; s<=n; s++){
            if(j!=s){
                m=arr[s]+arr[j];
                if(m!=k){
                    printf("unlucky");continue; }
                else printf("lucky"); } } }
    return 0; }