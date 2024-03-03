#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,a,h,b,c,k,l;
scanf("%d",&h);
if(h%2==1){
    a=h;}
    else a=h-1;
    b=a/2+1;
    for(i=1;i<=b;i++){
        for(j=1;j<=a;j++){
            if((b-(i-1)<=j)&&(j<=b+(i-1))){
                printf("*");
 }else printf(" ");}printf("\n");
        }if(h%2==1){
            c=b;
        }else c=b+1;
        for(k=b+1;k<=h;k++){
            for(l=1;l<=a;l++){
                if(((k-c)+1<=l)&&(l<=a-(k-c))){
                    printf("*");
                }else printf("");}
                printf("\n"); }
	return 0; }