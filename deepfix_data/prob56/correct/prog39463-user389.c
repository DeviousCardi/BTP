#include <stdio.h>
#include <stdlib.h>
int catalan(int num) {
    int a;
    if(num==1) {
        printf("1 ");
     return 1; }
    else {
        if(num>1) {
           a =  ((2 * ((2 * num) - 1)) / (num + 1) * (catalan(num - 1))); } }
    printf("%d ",a);
    return a; }
int main() {
    int i,j,t,k[1000],a;
    scanf("%d",&t);
    catalan(10);
    for(i=0;i<t;i++)
      scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    if(k[i]==0)
	     printf("1\n");
	    else {
	        for(j=1;j<100;j++) {
	          if(a>k[i]) {
	               printf("%d\n",a);
	               break; } } } }
	return 0; }