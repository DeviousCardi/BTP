#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,count,i,k,lminima;
    k=0;
    scanf("%d/n",&n);
    int s[20];
    for(count=0;count<n;count++){
        scanf("%d/n",&s[count]); }
  lminima = s[0];
  for (i = 1; i < n; i++){
        if (s[i] <= lminima){
              lminima = s[i];
              k=i; } }
   if((s[k]<s[k-1])&&(s[k]<s[k+1])){
       printf("Yes"); }
   else{
       printf("No"); }
	return 0; }