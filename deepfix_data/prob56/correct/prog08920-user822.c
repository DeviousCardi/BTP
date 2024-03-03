#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 1; }
    else {
        return (((4*n-2)/n+2)*catalan(n-1)); } }
void display(int k) {
    int i=0;
    while(catalan(i)<k) {
        i+=1; }
    printf("%d\n",catalan(i)); }
int main() {
    int t,k;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        display(k); }
	return 0; }