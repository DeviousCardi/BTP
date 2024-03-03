#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,min,flag=0,q=1;
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    min=a[0];
    for(i=0;i<n1;i++)
        if((min>a[i])) {
            for(j=0;j<n2;j++)
            if(a[i]==b[j]) {
                flag=1;
                break; }
            if(flag!=1) {
                min=a[i];
                q=0; } }
    if(q==0)
    printf("%d",min);
    else
    printf("NO");
	return 0; }