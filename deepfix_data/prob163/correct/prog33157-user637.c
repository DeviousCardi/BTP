#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
	char m;
	scanf("%c",&m);
	char arr[m];
    char n;
	scanf("%c",&n);
	for(i=0;i<m;i++){
	scanf("%c",&arr[i]); }
	 for(j=i;j<m;j++){
	     printf("%c",arr[j]);
    j=j+1; }
	return 0; }