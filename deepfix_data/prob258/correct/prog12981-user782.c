#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int M(int a ,int b,int c){
    if(a>b) {
        if (a>c){
            return a; }
        else
            return c; }
    else if(b>a){
        if (b>c){
            return b ; }
    }else
            return c ; }
int main() {
    int n,i,k ;
    scanf ("%d %d %d",&n,&i,&k) ;
    int j=M(n,i,k) ;
    printf ("%d",j);
	return 0; }