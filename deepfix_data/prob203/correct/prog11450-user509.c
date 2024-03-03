#include <stdio.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    int d[a];
    for(i=0;i<a;i++)
    {scanf("%d",&d[a]);
        printf("%d\n",d[i]);
        for(j=i+1;j<a;j++) {
            printf("%d\n",d[j]);
            if(d[i]==d[j])
            {printf("YES");
            return 0;} } }
    printf("NO");
	return 0; }