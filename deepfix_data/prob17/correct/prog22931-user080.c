#include <stdio.h>
int max(int a,int b)
{if(a>b)
{return a;} }
int min(int a,int b) {
    if(a>b)
    {return b;} }
int main() {
	int n1,n2,i,k,p,q,c=0;
	scanf("%d",&n1);
	int str1[n1];
	int str2[n2];
	for(i=0;i<n1;i=i+1) {
	    scanf("%d",&str1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i=i+1) {
	    scanf("%d",&str2[i]); }
   k=max(n1,n2);
   p=min(n1,n2);
   for(q=0;q<k;q=q+1) {
       if(str1[q]==str2[0])
       break; }
   for(q=k;q<k+p+1;q=q+1) {
    if(str1[q]==str2[q-k])
    c=c+1;
    break; }
   if(c==p)
	      {      printf("YES");}
	      else{ printf("NO");}
	return 0; }