#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k){
    if(n<k)
        return 0;
    else if(n==0&&k==0)
        return 1;
    else if(k==0)
        return 1;
    else
        return (bin(n-1,k)+bin(n-1,k-1)); }
int main() {
    int b,i=1,j=1,count=0;;
   scanf("%d",&b);
    for(i=0;i<=20;i++){
        for(j=0;j<=i+1;j++){
            if (bin(i,j)==b){
                printf("%d %d",i,j);
                count=1;
                break; } }
        if(count)
            break; }
    if(i==21)
        printf("-1");
	return 0; }