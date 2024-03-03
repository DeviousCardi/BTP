#include <stdio.h>
#include <stdlib.h>
int ln(int n,int l){
     int i; int j;
    for(i=0;i<2*l+1;i++){
        for(j=0;j<(n-l)-1;j++){
            printf(" "); }
    printf("%d",n-l+i);} }
int main() {
    int h;
    scanf("%d",&h);
    int i;
    for(i=0;i<h;i++){
        ln((2*h+1)/2,i%h); }
	return 0; }