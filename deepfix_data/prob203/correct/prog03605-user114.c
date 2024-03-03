#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0; i<n;i++) {
        scanf("%d",&s[i]); }
    for(int i=0; i<n; i++) {
        for(int j=0;j<n; j++) {
            if(s[i]==s[j]) count++; } }
    if(count>n) printf("YES");
    else printf("NO");
	return 0; }