#include <stdio.h>
#include <stdlib.h>
double catalan(int n) {
    int i;
    double sum=0;
    if(n==0)
    return 1;
    else {
    for(i=0;i<n;i++)
     {sum=sum+catalan(i)*catalan(n-1-i);}
    return sum; } }
int member(int k) {
  int i;
  for(i=0;i<17;i++) {
        if(k==catalan(i))
        {return 1;} }
return 0; }
int main() {
	int t,i;
	scanf("%d\n",&t);
	int test[t];
	for(i=0;i<t;i++)
	  scanf("%d\n",&test[i]);
	for(i=0;i<t;i++) {
	    if(member(test[i])==1)
	     {printf("yes\n");}
	    else
	     {printf("no\n");} }
	return 0; }