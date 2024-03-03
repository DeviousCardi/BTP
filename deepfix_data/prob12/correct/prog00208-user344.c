#include <stdio.h>
int main(){
    int n, i, j , k, m;
    scanf("%d\n", &n);
    int num[2*n];
    for(i=0; i<(2*n); i++){
        scanf("%d", &num[i]); }
    for(j=0; j<(2*n); j++){
        for(k=0; k<(2*n); k++){
            if(num[j]==num[k]){
                m=k-j;
                if(m<=2){ printf("%d", m);} } } }
    return 0; }