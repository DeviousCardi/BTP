#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int i;
	i=0;
	int s[i];
	for(i=0;i<n;i++){
	    scanf("%d\n",&s[i]);
	    if((i+1)<=n&&(i-1)>=0){
	    if(s[i]>s[i-1]&&s[i]>s[i+1]){
	                                    printf("Yes");
	                                    break; }
	            else{
	                                printf("No");
	                                break; } } }
	return 0; }