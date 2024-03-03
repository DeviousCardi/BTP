#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int d[a];
    for(i=0;i<a-1;i++) {
        printf("%d",d[i]);
        for(j=i+1;j<a;j++) {
            printf("%d",d[j]);
            if(d[i]==d[j])
            {printf("YES");
            return 0;} } }
    printf("NO");
	return 0; }