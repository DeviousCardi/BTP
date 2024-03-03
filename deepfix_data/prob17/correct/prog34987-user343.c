#include <stdio.h>
int n1,n2;
int a1[20],a2[20];
int s=0;
int check(int k) {
    int i;
    for (i=s;i<n1;i++) {
        if(k==a1[s]){
                        s=i+1;
                        printf("%d\n",k);
                        return 1; }
        else continue; }
    return 0; }
int main() {
	int i,j,count=1;
	scanf("%d",&n1);
	for (i=0;i<n1;i++)
	  scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for (j=0;j<n2;j++)
	  scanf("%d",&a2[j]);
	for (i=0;i<n2;i++) {
	  if(check(a2[i])==0) {
	      count = 0;
	      break; } }
	if (count==1)
	  printf("YES\n");
	else
	  printf("NO\n");
	return 0; }