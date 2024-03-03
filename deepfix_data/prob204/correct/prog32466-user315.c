#include <stdio.h>
#include <stdlib.h>
int main() {
	float n,m,l;
	int i,j,c;
	int cnt=0;
	scanf("%f",&n);
	m=n;
	int count=0;
	while (m>1) {
	    m=m/10;
	    count=count+1; }
	c=count;
	int a[c];
	int b[c];
	for(i=0;i<c;i++)    {
	    l=n;
	    for (j=0;j<count-1-i;j++) {
	      l=l/10.0; }
	    a[i]=((int)l)%10;
	    printf("%d",a[i]); }
	for (i=0;i<c;i++)   {
	    b[i]=a[c-1-i];
	    printf("%d",b[i]); }
	for(i=0;i<c;i++)    {
	    if (a[i]==b[i]) { cnt=cnt+1;} }
	if (count==cnt) {printf("YES");}
	else printf("NO");
	return 0; }