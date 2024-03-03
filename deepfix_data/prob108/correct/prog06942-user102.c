#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,l,m,n,p;
p=(n+1)/2;
scanf("%d",&n);
for(i=1;i<=p;i++){
    for(j=1;j<=i;j++){
        if(j!=1 && j!=i){
            printf("#b"); }
    else
    printf("*"); }
    printf("\n"); }
    for(l=p+1;l<=n;l++){
    for(m=1;m<=i;m++){
        if(m!=1 && m!=i){
            printf("#b"); }
    else
    printf("*"); }
    printf("\n"); }
	return 0; }