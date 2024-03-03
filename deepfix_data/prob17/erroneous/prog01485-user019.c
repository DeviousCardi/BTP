#include <stdio.h>
int main() {
	int n1,n2,a[20],b[20];
	int  cntgs(int n1,int n2,int a[],int b[])
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",b[i]);
	cntgs(n1,n2,a[],b[]);
	return 0; }
int cntgs(int n1,int n2,int a[],int b[]) {
    int i,j=0,flag;
        for(i=0;i<n1;i++) {
            if(b[j]==a[i]) {
                j++;
                if(j==(n2-1)) {
                printf("YES");
                flag=1; }
            else
            j=0; }
        if(flag==0)
        printf("NO");
return 0; }