#include <stdio.h>
#include <stdlib.h>
 int catalan(int n){
     if(n==0)
     return 1;
    else if(n==1)
     return 1;
     else {
     return 2*(2*n -1)*catalan(n-1)/(n+1);} }
 int main() {
	int n,i,t,k[100];
	    scanf("%d",&t);
	    for(i=0;i<t;i++)
	    scanf("%d",&k[i]);
	    for(i=0;i<t;i++){
	       for(n=0;n<17;n++){
	           if(catalan(n)!=k[i])
	           {printf("no\n");
	           break;}
	           if(k[i]==catalan(n))
	          { printf("yes\n");
	           break;} } }
 return 0; }