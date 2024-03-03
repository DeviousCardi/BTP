#include<stdio.h>
#include<stdlib.h>
long long int cat (int n){
    if(n==0) return 1;
    else return 3*cat(n-1)-1; }
int main(){
    int t;
    long long int x, a[17];
    scanf("%d", &t);
    int i, j;
    for(i=0; i<17; i++){
        a[i] = cat(i) ; }
    for(i=0; i<t; i++){
        scanf("%lld", &x);
        for(j=0; j<17; j++){
            if (x==a[j]) {
                printf("yes\n");
                break; }
            if ( x!=a[j] && j==16) printf("no\n"); } }
    return 0; }