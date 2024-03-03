#include <stdio.h>
#include <stdlib.h>
int ln(int n,int l){
     int i; int j;
     for(j=0;j<(n-l)-1;j++){
            printf(" "); }
    for(i=0;i<2*l+1;i++){
    printf("%d",(n-l+i)%10);} }
int main() {
    int h;
    scanf("%d",&h);
    int i;
    for(i=0;i<h;i++){
     if (i<(h+1)/2)  { ln((h+1)/2,i);}
     else {ln((h+1)/2,((h-1)/2)-(i%((h-1)/2)));}
        printf("\n"); }
	return 0; }