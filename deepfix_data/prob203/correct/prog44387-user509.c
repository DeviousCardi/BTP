#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int d[200];
    for(i=0;i<a;i++)
    {scanf("%d",&d[a]);
        for(j=i+1;j<=a;j++) {
            if(d[i]==d[j])
            {printf("YES");
            return 0;} } }
    printf("NO");
	return 0; }