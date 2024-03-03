#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int z[a];
    int i;
    for(i=0;i<a;i++) {
        scanf("\n%d ",&z[i]); }
    for(i=0;i<a;i++) {
        int j;
        for(j=0;j<a;j++) {
            if(z[i]==z[j]) {
                printf("YES"); }
            else {
                printf("NO"); } } }
	return 0; }