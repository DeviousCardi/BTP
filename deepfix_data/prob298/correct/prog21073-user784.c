#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{  int i,term=0;
   if(n<1)
   return 1;
   for(i=0;i<n;i++) {
       term+=catalan(i)*catalan(n-1-i); }
   return term; }
int main() {
    int i,j,flag=0,series[17],t,in[30];
    char out[30];
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        out[i]='no'; }
    for(i=0;i<17;i++)
    series[i]=catalan(i);
    for(i=0;i<t;i++) {
        scanf("%d",&in[i]);
        for(j=0;j<17;j++) {
            if(in[i]==series[j])
            out[i]='yes'; } }
    for(i=0;i<t;i++)
    printf("%c\n",out[i]);
	return 0; }