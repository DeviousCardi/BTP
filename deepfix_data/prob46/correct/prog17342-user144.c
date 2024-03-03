#include <stdio.h>
int is_primc(int);
int main(){
    int n,m;
    int count=0;
    int primchec;
    int i;
    scanf("%d%d",m,n);
    for(i=2;i<n;i++){
        primchec=0;
        if(n%i==0){
            primchec = is_prim(i); }
        count=count+primchec; }
    if(count==m){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }
int is_prim(int a){
    int j;
    for(j=2;j<a;j++){
        if(a%j==0)
            break; }
    if(j==a)
        return 1;
    else
        return 0; }