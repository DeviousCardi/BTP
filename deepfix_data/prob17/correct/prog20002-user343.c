#include <stdio.h>
int n1,n2;
int a1[20],a2[20];
int s,p;
int check(int s,int p) {
    int k,l;
    static int count=0;
    for (k=s;k<2;k++) {
        printf("%d ",a2[k]);
        for (l=p;l<4;l++) {
            printf("%d ",a1[l]);
            if (a2[k]==a1[l])
              count++; } }
    printf("%d",count);
       return count; }
int main() {
	int i,j,count=0;
	scanf("%d",&n1);
	for (i=0;i<n1;i++)
	  scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for (j=0;j<n2;j++)
	  scanf("%d",&a2[j]);
	for (i=0;i<n2;i++) {
	    for (j=0;j<n1;j++) {
	          if (a2[i]==a1[j]) {
	               check(i+1,j+1); } } }
	if (count==n2-1)
	  printf("YES\n");
	else
	  printf("NO\n");
	return 0; }