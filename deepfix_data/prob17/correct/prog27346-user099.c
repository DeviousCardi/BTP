#include <stdio.h>
int main() {
    int i=0,j=0,flag=0;
    int n1,n2;
    scanf("%d\n",&n1);
    int a1[n1];
    for(i=0;i<n1;i++) scanf("%d",&a1[i]);
    scanf("\n%d\n",&n2);
    int a2[n2];
    for(j=0;j<n2;j++) scanf("%d",&a2[j]);
    i=0; j=0;
    for(i=0;i<n2;i++) {
        if(j==n2) {
            flag=1;
            break; }
        if(a1[i]==a2[j]) j++;
        else j=0; }
    if(flag==0) printf("NO");
    else printf("YES");
	return 0; }