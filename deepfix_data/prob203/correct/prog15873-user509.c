#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int d[200];
    for(i=0;i<a;i++) {
        scanf("%d",&d[i]); }
    for(i=0;i<a;i++) {
        for(j=i+1;j<a-1;j++) {
            if(d[i]==d[j])
            printf("YES");
            break; } }
  printf("NO");
	return 0; }