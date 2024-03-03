#include <stdio.h>
#include <stdlib.h>
int catalan(int x);
int main(){
             int tcase,i,j,arr[20],c;
             scanf("%d",&tcase);
             for(i=0;i<tcase;i++) {
                 scanf("%d",&arr[i]); }
        for(i=0;i<tcase;i++) {
                 for(j=0;j<=16;j++) {
                     if(arr[i]==catalan(j)) {
                        c++;
                     break; } }
                 if(c==1)
                 printf("yes\n");
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