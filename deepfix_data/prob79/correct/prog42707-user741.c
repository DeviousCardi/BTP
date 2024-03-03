#include <stdio.h>
#include <stdlib.h>
int *no_of_choc(int *arr, int );
int main() {
    int n, i, *choc_time;
    scanf("%d",&n);
    choc_time =(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
       scanf("%d",(choc_time +i));
	int *q;
	q=no_of_choc(choc_time, n);
    printf("%n ",*q );
	return 0; }
int *no_of_choc(int *arr, int n) {
    int  a=0,b=0 ;
    int j= n, t2=*(arr+(j--));
    int i=0, t1=*arr;
    i++,a++;
    while(i<=j) {
         if( t1+(*(arr+i)) > t2+(*(arr+j)) ) {
             t2=*(arr+ (j--));
             b++; }
         else {
             t1=*(arr+ (i++));
             a++; } }
    int *p=NULL;
    *p=a;
    return p; }