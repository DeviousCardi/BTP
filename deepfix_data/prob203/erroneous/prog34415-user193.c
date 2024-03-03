#include <stdio.h>
int main() {
	int n;
	int i;
	scanf("%d",&n);
	if(n<50) {
    int N[n];
	for(i=0;i<=n-1;i++)
	scanf("%d", &N[i]); }
   for(i=0;i<=n-1;i++) {
       for(i=1;i<=n;i++)
       {if(N[i]==N[i])
       printf("YES");
       else
       printf("No"); }
	return 0; } }