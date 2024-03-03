#include <stdio.h>
int main() {
	int n1,n2;
	int a1[20],a2[20];
	scanf("%d\n",&n1);
	for(int i=0;i<n1;i++)
	scanf("%d ",&a1[i]);
	scanf("\n%d\n",&n2);
	for(int i=0;i<n1;i++)
	scanf("%d ",&a2[i]);
	int flag=0;
	for(int i=0;i<n1;i++) {
	    int k=0,l=i;
	    for(int j=0;j<n2;j++) {
	        k=k+(a2[j]==a1[l]);
	        l++;
	        printf("%d",k); }
	    if(k==n2+1) {
	        printf("YES");
	        flag=1;
	        break; } }
	if(flag==0)
	printf("NO");
	return 0; }