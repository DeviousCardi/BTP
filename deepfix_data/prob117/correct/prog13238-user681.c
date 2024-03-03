#include <stdio.h>
#include <stdlib.h>
void towers(int n,char from,char to,char aux,int c) {
    c=c+1;
    if(n==1)
    return;
    towers(n-1,from,aux,to,c);
    towers(n-1,aux,to,from,c); }
int main() {
    int t,k,i,j,flag=-1;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
    scanf("%d",&k); }
    for(i=0;i<t;i++) {
        for(j=1;;j++) {
          int c=0;
          towers(j,'a','b','c',&c);
          if(k==c) {
          flag=1;
          break; }
          else
          if(k<c) {
              flag=0;
              break; } }
        if(flag==1||flag==0)
        continue; }
	return 0; }