#include <stdio.h>
#include <stdlib.h>
int B(int n,int k){
    int b;
    if(n<k)
        b=0;
    else if(k==0)
        b=0;
        else b=B(n-1,k) + B(n-1,k-1);
        return b; }
int main() {
    int b,i,j,n=0,k=0;
    scanf("%d",&b);
    for(i=0;i<21;i++){
        for(j=0;j<21;j++){
            n=i;
            k=j;
            if(b==B(n,k)){
                printf("%d %d",i,j);
                return 0; } } }
    printf("-1");
	return 0; }