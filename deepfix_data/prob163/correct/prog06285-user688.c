#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n1, n2, i, j=0;
	scanf("%d\n%d\n", &n1, &n2);
	char a[n1], b[n2];
	char ch, x;
	    scanf("%c",&ch);
	    for(i=0;i<n1; i++){
	        a[i]=ch;
	        scanf("%c", &ch); }
	    scanf("%c", &x);
	for(i=0; j<n2; i++){
	    if(x!=' \n'){
	    b[j]=x;
	    j++; } }
	printf("%c", b[1]);
	return 0; }