#include <stdio.h>
int main() {
    int n1;
    scanf("%d \n",&n1);
    int m[n1];int n[n2]
    for(int i=0;i<n1;i++) {
        scanf("%d ",&m[i]); }
    int n2;
    scanf("\n %d \n",&n2);
	int n[n2];
	for(int i=0; i<n2;i++) {
	    scanf("%d ",&n[i]); }
	int c=0;
	for(int i=0;i<n2;i++) {
	    for(int j=0;j<n1;j++) {
	        if(n[i]==m[j])
	        c++; } }
	if(c==n2)
	printf("YES");
	else
	printf("NO");
	return 0; }