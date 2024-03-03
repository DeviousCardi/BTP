#include <stdio.h>
#include <stdlib.h>
int towers(int n,char from,char to,char aux,int *c) {
    c=c+1;
    if(n==1)
    return;
    towers(n-1,from,aux,to,&c);
    towers(n-1,aux,to,from,&c);
    return c; }
int main() {
    long int t,k,i,j,flag=-1;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
    scanf("%ld",&k); }
    for(i=0;i<t;i++) {
        for(j=1;j<10;j++) {
          long int c=0,l;
          l=towers(j,'a','b','c',&c);
          printf("%ld",l);
          if(k==l) {
          flag=1;
          break; }
          else
          if(k<l) {
              flag=0;
              break; } }
        if(flag==1) {
            printf("yes\n");
            continue; }
        if(flag==0) {
            printf("no\n");
            continue; } }
	return 0; }