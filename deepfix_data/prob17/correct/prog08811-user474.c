#include <stdio.h>
int main() {
	int a[20];
	int b[20];
	int n1;
	int n2;
	int i;
	int flag;
	int count=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<n1;i++) {
	    if(a[i]==b[i]) {
	        flag=i;
	        break;
	        printf("%d",flag); } }
	for(i=flag;i<n2;i++) {
	    if(a[i]==b[i]) {
	        count++; } }
	if(count==n2) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	for(i=0;i<n1;i++) {
	    printf("%d",a[i]); }
	for(i=0;i<n2;i++) {
	    printf("%d",b[i]); }
	return 0; }