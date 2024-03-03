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
        for(j=i;j<a;j++) {
            if(z[i]==z[j]) {
                c=1;
                printf("1\n");
                break; } }
        if(c==1)
            break; }
    if(c==1)
        printf("YES");
    else
        printf("NO");
	return 0; }