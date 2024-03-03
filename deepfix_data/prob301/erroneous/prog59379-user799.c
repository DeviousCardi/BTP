#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int i,s[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&s[i]); }
    for(i=n-1;i>=0;i--) {
        for(j=(n-i-1);j>=1;j--) {
            if(s[i]==s[i+j]){
                printf("%d",s[i]);
                break; } } }
	return 0; }