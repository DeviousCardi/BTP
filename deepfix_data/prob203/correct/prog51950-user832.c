#include <stdio.h>
int main() {
    int N,i,j;
    int a[50];
    scanf("%d\n",&N);
    for(int i=0;i<N;i++) {
        scanf("%d ",a+i); }
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(a[i]==a[j]) {
                printf("YES");
                break; } }
        if(j<N) {
            break; } }
    if(i==N) {
        printf("NO"); }
	return 0; }