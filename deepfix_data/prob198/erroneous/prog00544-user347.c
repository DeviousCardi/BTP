#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,min;
    scanf("%d",&n1);
    int a[n1];
    scanf("%d",&a[0])
    min=a[0];
    for(int i=0;i<n1;i++)
    {scanf("%d",&a[i]);
    if(a[i]<min)
    min=a[i];}
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++)
    scanf("%d",b[i]);
    for(int j=0;j<n2;j++) {
        if(min==b[j])
       { printf("%d",min);
       c=1;
        break; } }
    if(c!=1)
    printf("NO");
	return 0; }