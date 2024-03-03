#include <stdio.h>
#include <math.h>
int main(){
    int m, n;
    int i, x, sum;
    scanf("%d %d", m, n);
    for (i=2; i<=(n/2); i++){
        if (n%i==0){
            sum = 0;
            sum = sum + 1; } }
    if (sum==m){
        printf("YES"); }
    if (sum!=m){
        printf("NO"); }
    return 0; }