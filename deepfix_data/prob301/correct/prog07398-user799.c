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
    if(n==1) {
        printf("%d",s[0]); }
    else {
    for(i=n-1;i>=0;i--) {
        for(j=0;j<i;j++) {
            if(s[i]==s[j]){
                printf("%d ",s[i]); } } } }
	return 0; }