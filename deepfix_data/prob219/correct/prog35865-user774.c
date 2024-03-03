#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b&&b!=c&&c!=a) {
	if(a<=c) {
	    if(a<=b)
	    printf("%d",b);
	    else if(b<=a)
	    printf("%d",a);
	    else if(c<=b)
	    printf("%d",c); }
	else {
	    if(a<=b)
	    printf("%d",a);
	    else if(b<=c)
	    printf("%d",c);
	    else if(c<=b)
	    printf("%d",b); } }
	else if(a==b||b==c||c==a) {
	if(a==b) {
	    if(a<=c)
	printf("%d",a);
	else
	printf("%d",c); }
	else if(b==c) {
	if(b<=a)
	printf("%d",b);
	else
    printf("%d",a); }
	else  if(c==a) {
	if(c<=b)
	printf("%d",c);
	else
	printf("%d",b); } }
	return 0; }