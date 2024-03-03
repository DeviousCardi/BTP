#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t;
    scanf("%d",&n);
    i=1;
    while(i<=n){
    j=1;
    while(j<=(2*n-1)){
        t=(j%10);
        if((j<=n-i)||(j>=n+i))
        {printf(" ");}
        else
        {printf("%d",t);}
        j=j+1; }
 if(i<n)
 {printf("\n");}
 i=i+1; }
	return 0; }