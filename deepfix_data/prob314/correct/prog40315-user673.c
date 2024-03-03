#include <stdio.h>
#include <stdlib.h>
int main() {
	int i ,n , t , m ,j;
	scanf("%d",&n);
	char ch[100];
	for(i=0 ; i<n ; i++){
	    ch[i] = getchar();
	    i++ ; }
		scanf("%d",&t);
		for (j=0 ; j<t ; j++) {
		    scanf("%d",&m);
		    if(m==0){
		        if(ch[2]>ch[1]){ printf("Yes");}
		        else {printf("No");} }
		        if(m=n-1){
		            if(ch[n-2]>ch[n-1]){ printf("Yes");}
		        else {printf("No");} }
		       if(m>=1 && m<=n-2){
		           if (ch[m]<ch[m-1] && ch[m]<ch[m+1]){
		               printf("Yes");}
		               else {printf("No");} } }
	return 0; }