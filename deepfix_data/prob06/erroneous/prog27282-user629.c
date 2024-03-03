#include <stdio.h>
#include <stdlib.h>
int n,m,x,y;
void bulletproof(int *ptr1,int *ptr2) {
    int i=0,j=0,int count=0;;
     for(i=0;i<n;i++) {
         if(j>=m)
         break;
         for(j=count;j<m;j++) {
             if( *(ptr1+i)-x <= *(ptr2+j) && *(ptr2+j) <= *(ptr1+i)+y ) {
                 printf("%d %d\n", *(ptr1+i),*(ptr2+j));
                 count=j;
                 break; } } } }
int main() {
    int dummy;
    int *ptr1,*ptr2;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    ptr1=(int*)malloc(n * sizeof(int));
    ptr2=(int*)malloc(m * sizeof(int));
	for(i=0;i<n;i++) {
	    dummy=getchar();
	    scanf("%d",ptr1+i); }
	for(i=0;i<m;i++) {
	    dummy=getchar();
	    scanf("%d",ptr2+i); }
	bulletproof(ptr1,ptr2);
	return 0; }