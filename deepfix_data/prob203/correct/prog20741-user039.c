#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(num[i]==num[j]) {
                printf("YES");
                return 0; } } }
    printf("NO");
	return 0; }