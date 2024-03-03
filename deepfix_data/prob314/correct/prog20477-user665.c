#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,v[n];
     scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",v[i]);
	for(i=1;i<n-1;i++) {
	    if(v[0]<v[1]){printf("Yes");break;}
	    else if(v[n-1]<v[n-2]){printf("Yes");break;}
	    else if((v[i]<v[i-1])&&(v[i]<v[i+1])){printf("Yes");break;}
	       else continue; }
	return 0; }