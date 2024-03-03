#include <stdio.h>
int main() {
	int a,b,A1[20],A2[20],i,j,p;
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	scanf("%d",n);
	A1[i]=n; }
	scanf("%d",b);
	for(i=0;i<b;i++)
	{scanf("%d",&n);
	A2[i]=n; }
if(a>=b)
    {for(j=0;j<a;j++)
        {if(A2[0]==A1[j]) {
            for(i=1;i<b;i++)
            {if(A2[i]=A1[i+j])
            p=1;
            else
            {p=0;
            break ; } } }
        if(p==1)
        break ; } }
if(p==1)
printf("YES");
else
printf("NO")
	return 0; }