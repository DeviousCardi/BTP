#include <stdio.h>
 void input (int t[],int n) {
        for(int i=0;i<n;i++)
            scanf("%d",&t[i]); }
int main() {
    int n1,n2,j,flag;
    scanf("%d",&n1);
    int a[n1];
    input(a,n1);
    scanf("%d",&n2);
    int b[n2];
    if (n1<n2)
    printf("NO\n");
	return 0; }