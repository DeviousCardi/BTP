#include <stdio.h>
int main() {
	scanf("%d",&N1);
	for(i=0;i<N1;i++) {
	    scanf("%d",&arr1[i]); }
	scanf("%d",&N2);
	for(i=0;i<N2;i++) {
	    scanf("%d",&arr2[i]); }
	if(N1<=N2) {
	for(i=0;i<N2;i++) {
	    if(arr1[0]==arr2[i]) {
	        for(k=0;k<N1;k++) {
	            if(arr[k]!=arr2[i+k])
	        break;
	        verify=1; } } }
	if(verify==1)
	    printf("YES");
	    else
	    printf("NO");	}
	   else printf("NO");
	return 0; }