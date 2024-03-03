#include <stdio.h>
int main(){
    int m, n;
    int i;
    i=2;
        scanf("%d%d", &m, &n);
        int count=0;
    while(i<m){
        if((m%i==0)){
            if(i==n){
                printf("YES"); }
            else{
                printf("NO"); } }
        i=i+1; }
        return 0; }