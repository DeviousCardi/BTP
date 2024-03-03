#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
    int n1,n2;
    int a1[20],a2[20];
    int i,j,min;
    min=INT_MAX;
    scanf("%d",&n1);
    for (i=0;i<n1;i++)
      scanf("%d",&a1[i]);
    scanf("%d",&n2);
    for (j=0;j<n2;j++)
      scanf("%d",&a2[i]);
    for (i=0;i<n1;i++) {
        for (j=0;j<n2;j++) {
            if (a1[i]!=a2[j]) {
                   if (a1[i]<min)
                     min=a1[i]; } } }
    if (min==INT_MAX)
      printf("NO\n");
    else
      printf("%d\n",min);
	return 0; }