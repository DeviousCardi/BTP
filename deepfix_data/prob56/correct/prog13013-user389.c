#include <stdio.h>
#include <stdlib.h>
int catalan(int num) {
    int a,b,c;
    c=num;
    if(num==1)
     a= 1;
    else {
      b=2*(2 * c)/(c + 1);
     a= b * catalan(num-1); }
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