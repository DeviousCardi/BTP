#include <stdio.h>
int main() {
    int a,b,i,j,k;
    scanf("%d",&a);
    int d[a];
    for(i=0;i<a;i++){
        scanf("%d",&d[i]); }
    scanf("%d",&b);
    int e[b];
    for(i=0;i<b;i++) {
        scanf("%d",&e[i]); }
    for(j=0;j<a-1;j++) {
        for(k=0;k<b-1;k++) {
            if((d[j]==e[k])&&(d[j+1]==e[k+1]))
                printf("YES");
                break; } }
	if(j==a-1) printf("NO");
	return 0; }