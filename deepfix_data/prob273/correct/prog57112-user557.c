#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,ini,i,j,h;
    scanf("%d",&height);
    ini=(height+1)/2;
    h=(height+1)/2;
    for(i=0;i<(height+1)/2;i++){
        for(j=0;j<height/2-i;j++){
            printf(" "); }
        for(j=0;j<=i;j++){
            printf("%d",ini+j); }
        ini=ini-1;
        printf("\n"); }
    while(i>1){
        for(j=0;j<height/2-i+2;j++){
            printf(" "); }
        for(j=2;j<=i;j++){
            printf("%d",ini+j); }
        ini=ini+1;
        printf("\n");
        i=i-1; }
	return 0; }