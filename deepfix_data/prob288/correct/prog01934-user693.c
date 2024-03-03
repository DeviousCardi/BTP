#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(j=1;j<=2*n+1;j++){
	           for(i=1;i<=n+1;i++){
	                        if(i%2==1){
	                                        printf("*"); }
	                                  else{
	                                        printf("x"); } }
	            for(i=n;i>n+1;i--){
	                       if(i%2==1){
	                                        printf("*"); }
	                                 else{
	                                        printf("x"); } }
	           printf("\n");
	           continue; }
	return 0; }