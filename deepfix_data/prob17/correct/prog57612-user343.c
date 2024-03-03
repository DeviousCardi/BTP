#include <stdio.h>
int n1,n2;
int a1[20],a2[20];
int s=0;
int check(int s,int e) {
    int i;
    for (i=1;i<e;i++) {
        if(a2[i]==a1[s+i])continue;
        else return 0; }
    return 1; }
int main() {
	int i,j,count=0;
	scanf("%d",&n1);
	for (i=0;i<n1;i++)
	  scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for (j=0;j<n2;j++)
	  scanf("%d",&a2[j]);
	  for (j=0;j<n1;j++) {
	     if (a2[0]==a1[j])
	     if(check(j+1,n2-1)==1) {
	         count = 1;
	         break; } }
	if (count==1)
	  printf("YES\n");
	else
	  printf("NO\n");
	return 0; }