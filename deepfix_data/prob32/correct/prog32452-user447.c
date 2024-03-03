#include <stdio.h>
#include <stdlib.h>
int main() {
	int a=1,n,num,b;
	scanf("%d\n",&n);
	int s[20];
	int count=0;
	scanf("%d\n",&num);
	while(count<n) {
	      s[count]=num;
	      count=count+1;
	      scanf("%d",&num); }
	b=0;
	for(a=1;a<(n-1);a=a+1) {
	    if(((s[a]<s[a-1])&&(s[a]<s[a+1]))||(s[0]<s[1])||(s[n-1]<s[n-2]             )) {
	        b=1;
	        break; } }
	if(b==1) printf("Yes");
	else printf("No");
	return 0; }