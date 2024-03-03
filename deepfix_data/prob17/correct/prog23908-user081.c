#include <stdio.h>
int main() {
	int n1=0, n2=0, a1[19], a2[19], flag=0;
	scanf("%d", &n1);
	for(int i=0; i<n1; i++) {
	    scanf("%d ", &a1[i]); }
	scanf("%d", &n2);
	for(int i=0; i<n2; i++) {
	    scanf("%d ", &a2[i]); }
	for(int i=0; i<=(n1-n2); i++) {
	    for(int j=0; j<n2; j++) {
	        if(a1[i+j]==a2[j]) {
	            flag=1; }
	        else {
	            flag=0;
	            continue; } } }
	if(flag==1) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }