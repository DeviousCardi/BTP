#include <stdio.h>
int main() {
	int n1,n2,a[20],b[20],i,j=0,flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n1;i++) {
            if(b[j]==a[i]) {
                if(j==(n2-1)&&flag==0) {
                printf("YES");
                flag=1; }
                j++; }
            else
            j=0; }
    if(flag==0)
    printf("NO");
	return 0; }