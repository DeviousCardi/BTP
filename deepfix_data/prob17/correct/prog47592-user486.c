#include <stdio.h>
int main() {
	int i,j,n1,n2,count=0;
	scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++) {
       if(a[i]==b[0])
       {for(j=0;j<n2;j++)
          {if(a[i+j]==b[j])
           count=count+1;} }
    if(count==n2)
     {printf("YES");break;} }
    if(i==n1)
    printf("NO");
    return 0; }