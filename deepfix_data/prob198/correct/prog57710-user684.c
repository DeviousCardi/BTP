#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2;
	scanf("%d\n",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	    scanf("%d ",&a[i]);
	scanf("%d\n",&n2);
	int b[n2];
	for(int i=0;i<n2;i++)
	    scanf("%d ",&b[i]);
	for(int i=0;i<n1;i++) {
	    for(int j=i+1;j<n1;j++) {
	        if(a[j]<a[i]) {
	            int c=a[i];
	            a[i]=a[j];
	            a[j]=c; } } }
	int tem=-1,check=0;
	for(int i=0;i<n1;i++) {
	    check=0;
	    for(int j=0;j<n2;j++) {
	        if(a[i]!=b[j]) {
	            check++; } }
	    if(check==n2) {
	        tem=i;
	        break; } }
	if(tem==-1)
	    printf("NO");
	else
	    printf("%d",a[tem]);
	return 0; }