#include <stdio.h>
#include <stdlib.h>
int b(int n,int k){
   if (n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return b(n-1,k)+b(n-1,k-1); }
int main() {
    int i,j,num;
    scanf("%d",&num);
    for(i=0;i<=20;i++){
        for(j=0;j<=20;j++){
            if(num==b(i,j)){ } }
    }printf("%d %d",i,j);
	return 0; }