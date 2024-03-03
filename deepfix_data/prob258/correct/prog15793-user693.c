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
	    if(i>0&&i<(n-1)){
	                     if(s[i]>s[i-1]&&s[i]>s[i+1]){
	                                                     printf("Yes");
	                                                     break; }
	                      else {
	                                continue; } }
	    else if((s[0]>s[1])||(s[n-1]>s[n-2])){
	                                               printf("Yes");
	                                                break; }
	     else {
	                printf("No"); } }
	return 0; }