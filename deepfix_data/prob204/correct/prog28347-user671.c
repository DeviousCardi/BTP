#include <stdio.h>
#include <stdlib.h>
int reverse(int p[],int w){
    int j;
    for (j=0;j<w;j++){
    p[j]=p[w-j-1];}
    return p[j]; }
int main(){
    int x=getchar();
    printf("%c",x);
	return 0; }