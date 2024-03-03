#include <stdio.h>
int main() {
	int i=0;
	int j=0;
	int n,m;
    int	count=1;
	scanf("%d",&n);
	int N1[n];
	for(i=0;i<n;i++)
	scanf("%d",&N1[n]);
	scanf("%d",&m);
	int N2[m];
	for(j=0;j<m;j++)
	scanf("%d",&N2[2]);
	    for(i=0;i<n;i++)
          { if (N2[0]==N1[i])
       for(j=1;j<m;j++) {
           while((i=i+1)&&i<n)
              { if(N2[j]==N1[i+1])
                 count=count+1;
                 i=i+1; } } }
	if(count==m)
	printf("YES\n");
	else
	printf("NO\n");
	return 0; }