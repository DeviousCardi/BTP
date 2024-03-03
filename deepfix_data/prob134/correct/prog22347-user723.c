#include <stdio.h>
#include <stdlib.h>
int B(int n,int k){
    int b;
    if(n<k)
        return 0;
    else if(k==0)
     return 1;
        else return B(n-1,k) + B(n-1,k-1); }
int main() {
    int b,i,j,n=0,k=0;
    scanf("%d",&b);
    for(i=0;i<21;i++){
        for(j=0;j<21;j++){
            n=i;
            k=j;
            if(b==B(n,k)){
                printf("%d %d",i,j); } } }
    if (i==21)
    printf("-1");
	return 0; }