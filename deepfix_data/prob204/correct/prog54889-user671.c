#include <stdio.h>
#include <stdlib.h>
int reverse(int p[],int w){
    int j;
    for (j=0;j<w;j++){
    p[j]=p[w-j-1];}
    return p[j]; }
int main() {
    int z,count=0;
    for (z=0;z<100;z++){
        count=count+1;
    }printf("%d",count); ;
	return 0; }