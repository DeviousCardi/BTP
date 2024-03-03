#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n1, n2, i, j=0;
	scanf("%d\n%d\n", &n1, &n2);
	char a[n1], b[n2];
	char ch, x;
	scanf("%c",&ch);
	for(i=0; i<n1; i++){
	    a[i]=ch;
	    if(i==n1-2){scanf("%c\n", &ch); continue;}
	    if(i==n1-1)break;
	    scanf("%c", &ch); }
	scanf("%c", &x);
	for(i=0; j<n2; i++){
	    if(x!='\n' && x!=' '){
	    b[j]=ch;
	    j++; }
	    scanf("%d", &x); }
	char sum[1000];
	printf("%c", b[3]);
	return 0; }