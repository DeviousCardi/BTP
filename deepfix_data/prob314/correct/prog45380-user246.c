#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t;
    scanf("%d\n",&n);
    int s[n];
    for(i=0;i<n;i++) {
        scanf("%d\n",&s[i]); }
    scanf("%d/n",&t);
    int q[t];
    for(i=0;i<t;i++) {
        scanf("%d/n",&q[i]); }
    for(i=0;i<t;i++) {
        if(n==1) {
            printf("Yes"); }
        else if(q[i]==0) {
            if(s[0]<s[1])
            printf("Yes");
            else
            printf("No"); }
        else if(q[i]==n-1) {
            if(s[n]<s[n-1])
            printf("Yes");
            else
            printf("No"); }
        else {
            if((s[q[i]]<s[q[i]-1])&&(s[q[i]]<s[q[i]-1]))
            printf("Yes");
            else
            printf("No"); }
        printf("\n"); }
    return 0; }