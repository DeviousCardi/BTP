#include <stdio.h>
#include <stdlib.h>
int Fibo(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else
        return Fibo(n-1)+Fibo(n-2); }
int main() {
    int n,i,p[10];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&p[i]); }
    for(i=0;i<n;i++){
        printf("%d\n",Fibo(p[i])); }
	return 0; }