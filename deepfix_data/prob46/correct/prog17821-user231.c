#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    int i=2;
    int count=0;
    while(i<n) {
        if(n%i==0) {
            count++; }
        i++; }
    if(count==m){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }