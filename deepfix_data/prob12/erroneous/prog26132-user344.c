#include <stdio.h>
int main(){
    int n, i, j , k, m, min;
    scanf("%d\n", &n);
    int num[2*n];
    for(i=0; i<(2*n); i++){
        scanf("%d", &num[i]); }
    min=200;
    for(j=0; j<=(n); j++){
        for(k=n+1; k<(2*n); k++){
            if(num[j]==num[k]){
                m=k-j;
                if(m<min){
                    min=m; } } } } }
    return 0; }