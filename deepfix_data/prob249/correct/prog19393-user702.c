#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,l,a,c;
    scanf("%d",&h);
    if(h%2==1){
        a=h/2+1; }
    else a=h/2;
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if((j==a)&&(j==a-i+1)){
                printf("*");
            }else printf(" "); }
        printf("\n");
        if(h%2==1){
            c=a;
        }else c=a+1;
        for(k=a+1;k<=h;k++){
            for(l=1;l<=a;l++){
                if((l==a)&&(l==k-c+1))
                {printf("*");}else printf(" ");
            }    printf("\n");
        }}
	return 0; }