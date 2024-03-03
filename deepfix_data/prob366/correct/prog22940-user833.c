#include <stdio.h>
int main(){
    int n, i, j, min, k1, k2;
    scanf("%d", &n);
    int a[2*n], b[200];
    for(i=0; i<(2*n); i++){
        scanf("%d", &a[i]); }
    for(i=1; i<=n; i++){
        int count=0;
        for(j=0; j<2*n; j++){
            if(a[j]==i){
                count=count+1;
                if(count==1){
                    k1=j; }
                if(count==2){
                    k2=j; } } }
        b[i]=k2-k1; }
    min=b[1];
    for(i=2; i<=n; i++){
        if(b[i]<min){
            min=b[i]; } }
    printf("%d", min);
    return 0; }