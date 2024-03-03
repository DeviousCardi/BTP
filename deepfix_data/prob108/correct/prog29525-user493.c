#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i=i+1){
        for(j=1;j<=i;j=j+1){
            if((j==i)||(j==1))
            printf("*");
            else
            printf(" "); }
         printf("\n"); }
        for(i=1;i<=(n/2);i=i+1){
            for(j=i;j<=(n/2);j=j+1){
                if((j==i)||(j==1))
                printf("*");
                else
                printf(" "); }
            for(k=(n+1/2);k<n;k=k+1){
                if((k==i-(n+1)/2)||(k==1))
                printf("*");
                else
                printf(" "); }
             printf("\n"); }
	return 0; }