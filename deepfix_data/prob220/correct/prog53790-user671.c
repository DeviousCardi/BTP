#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    if(i<=n-1){
    for (j=1;j<=(2*n-1);j++){
    if((i+j==(n+1))||(i+j==n-1)){
    printf("%c",'*'); }
    }    printf("\n");
    }else for(k=1;k=(2*n-1);k++){
     printf("%c",'*'); } }
	return 0; }