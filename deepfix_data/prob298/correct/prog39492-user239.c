#include <stdio.h>
#include <stdlib.h>
int catalan(int x);
int main(){
             int tcase,i,k;
             int c=0;
             scanf("%d",&tcase);
        for(i=0;i<tcase;i++) {
                 scanf("%d",&k);
                 for(i=0;i<=16;i++) {
                     if(k==catalan(i))
                    { c++;
                     break;}
                     else
                     c=0; }
                 if(c==1)
                { printf("%d",k);
                      printf("yes\n"); }
                    else if(c==0)
                   printf("no\n"); }
	return 0; }
int catalan(int x) {
     int cat=0;
     int i;
     if(x==0)
     return 1;
     else if(x==1)
     return 1;
     else
     for(i=0;i<x;i++)
     cat=cat+catalan(i)*catalan(x-i-1);
     return cat; }