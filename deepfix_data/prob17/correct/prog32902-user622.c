#include <stdio.h>
int main() {
	int N1,N2,i,j;
	int a1[N1];
    int a2[N2];
    scanf("%d",&N1);
    for(i=0;i<N1;i++) {
                  scanf("%d",&a1[i]);
                  printf("%d ",a1[i]); }
	scanf("%d",&N2);
	for(i=0;i<N2;i++) {
                    scanf("%d",&a2[i]); }
    for(i=0;i<N1;i++)
                   {for(j=0;j<N2;j++)
                  {if(a2[j]!=a1[i]){continue;}
                    else if(a2[j]==a1[i]){i++;j++;
                                        a2[j]==a1[i];
        printf("YES");
}} }
	return 0; }