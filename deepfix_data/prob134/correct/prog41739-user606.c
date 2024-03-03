#include <stdio.h>
#include <stdlib.h>
int bin(int n,int r){
    if(n<r)return 0;
    if(r==0 || (n==0 && r==0))return 1;
    return bin(n-1,r) + bin(n-1,r-1); }
int main() {
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(bin(i,j)==n){
                printf("%d %d",i,j);
                count ++;
                break;} } }
if(count==0)printf("-1");
	return 0; }