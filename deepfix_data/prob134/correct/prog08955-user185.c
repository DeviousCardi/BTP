#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k)
    {return 0;}
    else if(k==0)
    {return 1;}
    else {
        return B(n-1,k)+B(n-1,k-1); } }
int main() {
    int b,i,j,t=0;
    scanf("%d",&b);
    for(i=0;i<=20;i++) {
        for(j=i;j<=20;j++) {
            if(B(j,i)==b) {
                printf("%d %d",j,i);
                t++;
                break; }
           if(t>0){break;}
           if(t=0){printf("-1");} } }
	return 0; }