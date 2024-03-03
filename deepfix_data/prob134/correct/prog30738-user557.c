#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k){
    if(n<k)
        return 0;
    else if(n==0&&k==0)
        return 1;
    else if(k==0)
        return 0;
    else
        return bin(n-1,k)+bin(n-1,k-1); }
int main() {
    int b,i=1,j;
    scanf("%d",&b);
    printf("%d",bin(6,2));
    while(1){
        j=i/2;
         if(bin(i,j)<b)
            i++;
         else
            if(bin(i,j-1)>b)
            j--;
         else
            if(bin(i,j)==b){
                printf("%d %d",i,j);
                break; }
         else
             if(j<0||i>20){
                printf("-1");
                break; } }
	return 0; }