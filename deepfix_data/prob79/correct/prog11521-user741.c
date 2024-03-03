#include <stdio.h>
#include <stdlib.h>
int no_of_choc(int *arr, int );
int main() {
    int n, i, *choc_time;
    scanf("%d",&n);
    choc_time =(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
       scanf("%d",(choc_time +i));
	int p=no_of_choc(choc_time, n);
	return 0; }
int no_of_choc(int *arr, int n) {
    int i=0, j=n, a=0,b=0 ;
    int t1=*arr, t2=0;
    i++;a++;
    while(i<=j) {
         if( t1+(*(arr+i)) > t2+(*(arr+j)) ) {
             t2=*(arr+j);
             j--;
             b++; }
         else {
             t1=*(arr+i);
             i++;
             a++; }
         if((i+j)==n)
          break; }
    printf("%d %d",a ,b);
    return 0; }