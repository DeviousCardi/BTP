#include <stdio.h>
int main() {
    int n1,n2;
    int a1[20],a2[20];
    scanf("%d\n",&n1);
    for(int i=0;i<=20;i++) {
        scanf("%d ",&a1[i]); }
    scanf("\n%d\n",&n2);
    for(int i=0;i<=20;i++) {
        scanf("%d ",&a2[i]); }
    for(int k=0;k<=n1;k++) {
        for(int l=0;l<=n2;l++) {
            if(n1>=n2) {
                for(int m=l;m<=n2-l;m++) {
                    if(a1[k+m]==a2[l+m])
                    printf("YES");
                    else
                    printf("NO"); } }
                else {
                    for(int m=l;m<=n1-k;m++) {
                    if(a1[k+m]==a2[l+m])
                    printf("YES");
                    else
                    printf("NO"); } } } }
	return 0; }