#include <stdio.h>
#include <stdlib.h>
int catalan(int num) {
    int a,c;
    float b;
    c=num-1;
    if(num==1)
     return 1;
    else {
      b= (2*(2*(c)+1))/(c+2);
       printf("%f ",b);
     a= b * catalan(c);
     printf("%d",a); }
    printf("\n");
    return a; }
int main() {
    int i,j,t,k[1000],a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
      scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    if(k[i]==0)
	     printf("1\n");
	    else {
	        for(j=1;j<100;j++) {
	          a=catalan(j);
	          if(a>k[i]) {
	               printf("%d\n",a);
	               break; } } } }
	return 0; }