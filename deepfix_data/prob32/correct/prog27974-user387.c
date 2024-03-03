#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n;
int s[25];
scanf("%d",&n);
for(i=1;i<n;i++);
     scanf("%d",&s[i]);
    if(s[i]<s[i-1]&&s[i]<s[i+1]) {
     printf("Yes"); }
    else{
    printf("No"); }
	return 0; }