#include <stdio.h>
int main() {
    int n1,n2;
    int a1[20],a2[20];
    int i,j;
    scanf("%d",&n1);
    for (i=0;i<n1;i++)
      scanf("%d",&a1[i]);
    scanf("%d",&n2);
    for (j=0;j<n2;j++)
      scanf("%d",&a2[j]);
    int min=a1[0];
    for (i=0;i<n1;i++) {
        for (j=0;j<n2;j++) {
            if (a1[i]!=a2[j])
                min=a1[i];
            if (a1[i]==a2[j])
                a1[i]=min; } }
    for (i=0;i<n1;i++) {
        if (a1[i]<min)
          min=a1[i]; }
    printf("%d",min);
	return 0; }