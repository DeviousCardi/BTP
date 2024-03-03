#include <stdio.h>
int main() {
    int N1,N2,i,k,verify=0;
	scanf("%d",&N1);
	int arr1[N1];
	for(i=0;i<N1;i++) {
	    scanf("%d",&arr1[i]); }
	scanf("%d",&N2);
	int arr2[N2];
	for(i=0;i<N2;i++) {
	    scanf("%d",&arr2[i]); }
	if(N1<=N2) {
	for(i=0;i<N2;i++) {
	    if(arr1[0]==arr2[i]) {
	        for(k=0;k<N1;k++) {
	            if(arr1[k]!=arr2[i+k])
	            break; } }
	}printf("%d",k);
	if(verify==1)
	    printf("YES");
	    else
	    printf("NO");	}
	   else printf("NO");
	return 0; }