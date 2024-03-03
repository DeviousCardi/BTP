#include <stdio.h>
#include <stdlib.h>
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int main() {
    int n;
    scanf("%d\n",&n);
    int i,j,s[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&s[i]); }
    for(i=0;i<n;i++) {
        for(j=n-1;j>i;j--) {
            if(s[i]==s[j]){
                printf("%d",s[i]); } } }
	return 0; }