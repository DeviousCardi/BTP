#include <stdio.h>
int main() {
    int count,i,j,arr1[20],arr2[20],n1,n2;
    scanf("%d",&n1);
    scanf("%d ",&arr1[n1]);
    scanf("%d",&n2);
    scanf("%d ",&arr2[n2]);
	for(i=0;i<n1;)
	for(j=0;j<n2;) {
	    while(arr1[j]==arr2[i])
	    count=1;
	    while(arr1[j]!=arr2[i])
	    count=0;
	    i++;
	    j++; }
	if(count==1)
	printf("YES");
	else
	printf("NO");
	return 0; }