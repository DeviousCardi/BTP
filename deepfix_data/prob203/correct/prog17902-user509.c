#include <stdio.h>
int main() {
    int a,i,j,c=0;
    scanf("%d ",&a);
    int d[200];
    for(i=0;i<a;i++) {
        scanf("%d",&d[i]); }
    for(i=0;i<a;i++) {
        for(j=i+1;j<a-1;j++) {
            if(d[i]==d[j]) {
                printf("yes\n"); } }
        printf("no"); }
	return 0; }