#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int d[a];
    for(i=0;i<a;i++) {
        for(j=0;j<a;j++) {
            if(d[i]==d[j])
            {printf("YES\n");
            return 0;}
            if(d[i]!=d[j]) {
                printf("NO\n");
                break; } } }
	return 0; }