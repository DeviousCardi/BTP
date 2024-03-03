#include <stdio.h>
#include <stdlib.h>
int ln(int n,int l){
    int p=n-l-1; int i;
    for(i=0;i<2*l+1;i++){
    printf("%pd",n-l+i);} }
int main() {
    int h;
    scanf("%d",&h);
    int i;
    for(i=0;i<h;i++){
        ln((2*h+1)/2,i%h) }
	return 0; }