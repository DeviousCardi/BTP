#include <stdio.h>
int main() {
	int a[20];
	int b[20];
	int n1;
	int n2;
	int i;
	int j;
	int flag;
	int count;
	int c=0;
	scanf("%d ",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d ",&a[i]); }
	scanf("%d ",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d ",&b[i]); }
	for(i=0;i<n2;i++) {
	    for(j=0;j<n1;j++) {
	        if(a[j]==b[i]) {
	            flag=j;
	            count=i;
	            break; } } }
	printf("%d",flag);
		printf("%d",count);
	while(flag<n1&&count<n2) {
	    if(a[flag]==b[count]) {
	        c++; }
	    flag++;
	    count++; }
	if(c==n2) {
	    printf("YES"); }
	else{
	    printf("NO"); }
	printf("%d",c);
	return 0; }