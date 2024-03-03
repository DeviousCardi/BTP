#include <stdio.h>
int main() {
	int n,i,j,count=0;
	scanf("%d",&n);
	int no[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&no[i]);
	    for(j=0;j<i;j++) {
	        if(no[i]==no[j])
	        count=count+1;
	        else
	        count=count+0; }
	    if(count>1) {
	        printf("YES");
	        break; }
	    else
	    count=count+0; }
	if(count==0)
	printf("NO");
	return 0; }