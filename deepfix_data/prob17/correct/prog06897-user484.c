#include <stdio.h>
int main() {
    int n1,n2,count,value,i=0,j=0;
int a[20],b[20];
scanf("%d",&n1);
for(i=0;i<20;i++)
    scanf("%d",&a[i]);
scanf("%d",&n2);
for(i=0;i<20;i++)
    scanf("%d",&b[i]);
for(i=0;i<n1;i++) {
        if (a[i]==b[0])
        break;
        value= i;}
for(i=value;i<=value+n2;i++) {
      count=0;
    for(j=0;j<=n2;j++) {
        if (a[i]==b[j])
    count++; } }
if(count==n2)
printf("YES");
else printf("NO");
	return 0; }