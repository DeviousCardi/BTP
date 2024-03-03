#include <stdio.h>
#include <stdlib.h>
int B(int n;int k){
    if(n<k)return 0;
    if(k==0)return 1;
    return B(n-1,k)+B(n-1,k-1); }
int main() {
    int i,j,k,t,n;
    scanf("%d",&t);
    for(n=0;n<20;n++){
        for(k=0;k<=n;k++){
            if(t==B(n,k)){
                printf("%d %d",&n,&k);
                return 0; } } }
	return 0; }