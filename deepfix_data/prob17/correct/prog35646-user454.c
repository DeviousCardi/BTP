#include <stdio.h>
int main() {
	int n1,n2,f=0,c=0,j=0;
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	int b[n2];
	for(int i=0;i<n2;i++)
	scanf("%d",&b[i]);
	while(1) {
            if(a[0]==b[j]) {
                c=j;
                f=1;
                break; }
            j+=1; }
    if(f==1) {
        for(int j=1;j<n2-1;j++) {
            if(a[j]==b[c+j])
            f=+1; } }
    printf("%d\n",f);
    if(f==n2)
    printf("YES");
    else
    printf("NO");
	return 0; }