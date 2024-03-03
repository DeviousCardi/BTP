#include <stdio.h>
int main() {
    int n1,n2,i,j;
    scanf("%d\n",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d ",&a[i]); }
    scanf("\n%d\n",&n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<n1;i++) {
       if(b[0]==a[i]) {
           for(j=0;j<n2;) {
                if(b[j]!=a[j+i])
                    break;
                else
                    j++; } }
       if((j+1)==n2) {
           printf("YES\n");
           break; }
       else
        continue; }
    printf("%d\n",j+1);
    if((j+1)!=n2)
        printf("NO\n");
	return 0; }