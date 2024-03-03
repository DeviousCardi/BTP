#include <stdio.h>
#include <stdlib.h>
int main() {
	int i ,n , t , m ,j ;
	scanf("%d",&n);
	int num[100];
	for(i=0 ; i<n ; i++){
	   scanf("%d",&num[i]); }
		scanf("%d",&t);
		for (j=0 ; j<t ; j++) {
		    scanf("%d",&m);
		    if(m==0){
		        if(num[1]>num[0]){ printf("Yes\n");}
		        else {printf("No\n");} }
		        if(m==n-1){
		            if(num[n-2]>num[n-1]){ printf("Yes\n");}
		        else {printf("No\n");} }
		       if(m>=1 && m<=n-2){
		           if (num[m]<num[m-1] && num[m]<num[m+1]){
		               printf("Yes\n");}
		               else {printf("No\n");} } }
	return 0; }