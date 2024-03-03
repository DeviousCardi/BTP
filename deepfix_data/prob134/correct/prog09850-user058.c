#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k) {
    int answer;
    if(n<k) {
        return 0; }
    if(n==0 && k==0) {
        return 1; }
    if(k==0) {
        return 1; }
    answer=binomial(n-1, k) + binomial(n-1, k-1);
    return answer; }
int main() {
    int b, n, k, check;
    check=0;
    scanf("%d", &b);
    for(n=0; n<=20; n++) {
        for(k=0; k<=n; k++) {
            if(b==binomial(n, k)) {
                printf("%d %d", n, k);
                check=1;
                break; } }
        if(check==1) {
            break; } }
    if(check==0) {
        printf("-1"); }
	return 0; }