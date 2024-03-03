#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int t[n];
	int i;
	for(i=0;i<=n;i++) {
	    do {
	        scanf("%d",&t[i]);
	    }while(t[i]=='\n'||t[i]==' ');
	    if(t[i]<t[i-1]&&t[i]<t[i+1]) {
	        printf("%d\n",i);
	        return 0; } }
	return 0; }