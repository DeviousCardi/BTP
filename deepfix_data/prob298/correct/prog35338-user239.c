#include <stdio.h>
#include <stdlib.h>
int catalan(int x);
int main(){
             int tcase,i,k;
             scanf("%d",&tcase);
        for(i=0;i<tcase;i++) {
                 scanf("%d",&k);
                 if(k==catalan(k))
                 printf("yes/n");
                 else
                 printf("no/n"); }
	return 0; }
int catalan(int x) {
     int cat;
     if(x==0)
     return 1;
     else
     cat=(2*(x)/x+1)*x;
     return cat; }