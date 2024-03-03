#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[1000],b[1000];
    int N,M=0;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",a+i);
        b[i]=0; }
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
            if(a[i]>a[j]) {
                M++;
                b[i]++; } } }
    printf("%d\n",M);
    for(int i=0;i<N;i++) {
        printf("%d ",b[i]); }
	return 0; }