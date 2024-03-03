#include <stdio.h>
int main() {
    int a;
    int c=0;
    scanf("%d\n",&a);
    int z[a];
    int i;
    for(i=0;i<a;i++) {
        scanf("%d ",&z[i]); }
    for(i=0;i<a;i++) {
        int j;
        for(j=1;j<a;j++) {
            if(z[i]==z[j]) {
                printf("YES");
                c=1;
                break; }
            else {
                printf("NO"); } }
        if(c==1)
            break; }
	return 0; }