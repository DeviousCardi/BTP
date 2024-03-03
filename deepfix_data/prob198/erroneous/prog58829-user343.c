#include <stdio.h>
int n1,n2,p;
int check(int n,int c[],int e) {
  int l;
  for (l=0;l<e;l++) {
        if (n==c[l]) {
                p=l;
                return 1; } }
    return 0; }
int main() {
    int a1[20],a2[20];
    int i,j;
    int counter=0;
    scanf("%d",&n1);
    for (i=0;i<n1;i++)
      scanf("%d",&a1[i]);
    scanf("%d",&n2);
    for (j=0;j<n2;j++)
      scanf("%d",&a2[j]);
    for (i=0;i<n1;i++) {
        if (check(a1[i],a2,n2)==0) {
            flag=a1[i];
            counter=1;
            break; } }
      if (counter==0)
         printf("NO\n");
    for (i=0;i<n1;i++) {
       if (check(a2[i],a1[],n1)==1)
           a1[p]=flag; }
    int min=flag;
    for (i=0;i<n1,i++) {
        if (a1[i]<min)
            min=a1[i]; }
    printf("%d",min);
	return 0; }