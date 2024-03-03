#include <stdio.h>
int main() {
	int n,i,flag=1 ;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(int j=0;j<n;j++){
	    for(int k=0;k<n;k++){
	        if((j!=k)&&(a[j]==a[k])){
	            flag=0; } } }
	if (flag==0){
	    printf("YES");
	}else printf("NO");
	return 0; }