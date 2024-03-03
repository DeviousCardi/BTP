#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i,j;
    for(i=1;i<=n;i=i+1){
    for(j=1;j<=((2*n)-1);j=j+1){
        if(i==1){
            printf("*");}
        else{
        if((j==i)||(j==2*n-i)){
            printf("*");}
            else{
                if((j<i)||((j>=i+1)&&(j<=2*n-i-1)));
                printf(" "); } } }
    printf("\n"); }
	return 0; }