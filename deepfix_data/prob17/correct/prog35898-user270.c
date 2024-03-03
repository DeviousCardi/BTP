#include <stdio.h>
int main() {
	int n1, n2;
	scanf("%d",&n1);
	int a1[n1], i;
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	int a2[n2];
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	int temp,j, flag=0;
	for(i=0;i<n1;i++) {
	    if (a2[0]==a1[i]) { temp=i;
	                         printf("%d ",temp); break; }
	    else continue; }
	if ((n1-temp+1)<n2) flag=1;
    else {	for (j=0;j<n2;j++) {
    	    if (a1[temp+j]==a2[j]) continue;
    	    else {
    	        flag=1;
    	        break; } } }
    if (flag==1) printf("NO");
	else printf("YES");
	return 0; }