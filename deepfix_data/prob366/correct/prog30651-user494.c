#include <stdio.h>
int main() {
    int min=1000,n,d;
    scanf("%d",&n);
    int gates[400];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&gates[i]); }
    for(int i=0;i<2*n-1;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(gates[i]==gates[j]) {
                d=j-i; }
            if(d<min&&d>0) {
                min=d; } } }
    printf("%d",min);
    return 0; }