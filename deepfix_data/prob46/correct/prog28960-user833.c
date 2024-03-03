#include <stdio.h>
int main(){
    int m, n;
    int i, sum=0;
    scanf("%d %d", &m, &n);
    for (i=2; i<=(n/2); i++){
        if (n%i==0){
            sum = sum + 1; } }
    if (sum==m){
        printf("YES"); }
    else if (sum!=m){
        printf("NO"); }
    return 0; }