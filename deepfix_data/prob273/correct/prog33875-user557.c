#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,ini,i,j,k,l;
    scanf("%d",&height);
    for(i=0;i<(height+1)/2;i++){
        ini=((height+1)/2+i)%10;
        for(j=0;j<=i;j++){
            printf("%d",(ini+j)%10); }
        printf("\n"); }
    for(k=height/2;k<0;k--){
        ini=(2+k)%10;
        for(l=0;l<=k;l++){
            printf("%d",(ini+l)%10); }
        printf("\n"); }
	return 0; }