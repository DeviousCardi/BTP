#include <stdio.h>
#include <math.h>
int main(){
    int m, n;
    int i, sum;
    scanf("%d %d", m, n);
    for (i=2; i<=(int)(n/2); i++){
        sum = 0;
        if (n%i==0){
            sum = sum + 1; } }
    if (sum==m){
        printf("YES"); }
    else if (sum!=m){
        printf("NO"); }
    return 0; }