#include <stdio.h>
#include <stdlib.h>
int main() {
int ch,i,n;
int s[20];
scanf("%d",&n);
scanf("%d",&ch);
for(i=1;i<n;i++);
    if(s[i]<s[i-1]&&s[i]<s[i+1]) {
     printf("yes"); }
   else{
     printf("No"); }
	return 0; }