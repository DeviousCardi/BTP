#include <stdio.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j;
    scanf("%d\n",n1);
    for(i=0;i<n1;i++) {
        scanf("%d ",&a[i]); }
    scanf("\n%d",n2);
    for(i=0;i<n2;i++) {
        scanf("%d ",&b[i]) }
    for(i=0;i<n1;) {
        if(b[0]==a[i]) {
            j=1;
            for(;j<n2:j++) {
                if(b[j]==a[j+i])
                    continue;
                else
                    break; } }
        if(j==n2) {
            printf("YES\n");
            break; } }
	return 0; }