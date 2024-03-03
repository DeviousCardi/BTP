#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,count,p,q,x,y,*b,*c;
scanf("%d %d %d %d",&p,&q,&x,&y);
b=(int*)malloc(p*sizeos(int));
c=(int*)malloc(q*sizeof(int));
for(i=0;i<p;i++) {
    scanf("%d",b+i); }
for(i=0;i<q;i++) {
    scanf("%d",c+i) }
   count=0;
   k=0;
   int g[q]h[q];
   for(i=0;i<p;i++) {
       for(j=0;j<q;j++) {
           if((*(c+j)>=(*(b+i)-x)) && (*(c+j)<=(*(b+i)+y))) {
               count++;
               g[k]=i+1;
               h[k]=j+1;
               k++;
               break; } } }
   printf("%d\n",count);
   for(i=0;i<count;i++) {
       printf("%d %d\n",g[i],h[i]); }
	return 0; }