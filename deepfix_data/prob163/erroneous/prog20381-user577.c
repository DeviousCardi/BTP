#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch;
	int size1, size2,actual,i;
	scanf("%d %d", &size1, &size2);
	if (size1<size2) {
	    actual_size=size2; }
	else if (size1>size2) {
	    actual=size1; }
	else actual=size1;
	char first[actual];
	for (i=0; i<actual; i++) {
	    ch=getchar();
	    first[i]=ch; }
	char second[actual];
	for (i=0; i<actual; i++) {
	    ch=getchar();
	    second[i]=ch; }
	char result[actual+2];
	for (i=0; i<actual+2; i++) {
	    result[ (actual+2) - i]= ( ( ('first[actual-i]'-'0') + ('second[actual-i]'-'0') ) %10);
	    result[ (actual+2)-i-1]= ( ( ( ('first[actual-i]'-'0') + ('second[actual-i]'-'0') ) / 10)*10 +
	                             ( ('first[actual-i-1]'-'0') + ('second[actual-i-1]'-'0') ) %10 ); }
	for (i=0; i<actual+2; i++) {
	    printf("%c", result[i] ); }
	return 0; }