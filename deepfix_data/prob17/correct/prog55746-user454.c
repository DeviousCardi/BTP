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
	while(j<n1) {
            if(b[0]==a[j]) {
                c=j;
                f=1;
                printf("c=%d\n",f);
                break; }
            j=j+1; }
    if(f==1) {
        printf("f=%d\n",j);
        for(int m=1;m<n2;m++) {
            printf("a=%d %d\n",b[m],a[m+c]);
            if(b[m]==a[c+m]) {
                f=f+1;
                printf("f=%d",f); } } }
    printf("%d\n",f);
    if(f==n2)
    printf("YES");
    else
    printf("NO");
	return 0; }