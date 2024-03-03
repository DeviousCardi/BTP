#include <stdio.h>
#include <stdlib.h>
int main() {
	int i ,n , t ;
	scanf("%d",&n);
	char ch[100];
	for(i=0 ; i<n ; i++){
	    ch[i] = getchar();
	    i++ ; }
		scanf("%d",&t);
		int j , p ;
		for(j=1;j<=t;j++)
		{scanf("%d",&p);
	if (p==0)
	{if(ch[p]<ch[p+1])
		printf("Yes");
		else
		printf("No"); }
		if(p!=0&&p!=n-1) {
		    if ((ch[p]<ch[p-1])&&(ch[p]<ch[p+1])) {
		        printf("Yes"); } }
	if(p==n-1)
	{if(ch[p]<ch[p-1])
	printf("Yes"); } }
	return 0; }