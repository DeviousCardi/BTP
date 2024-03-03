#include <stdio.h>
int main() {
    int A1[200],A2[200];
int n;
scanf("%d",&n);
 for (int i=0;i<n;i=i+1){
  scanf("%d",&A1[i]); }
 int s;
 scanf("%d",&s);
  for (int j=0;j<s;j=j+1){
      scanf("%d",&A2[j]); }
  for (int i=0;i<n;i=i+1){ }
    for (int i=0;i<n;i=i+1){
         scanf("%d%d",&A1[i],&A2[i]);
        int j=0;
        j<=i && j<s;
        if (A1[i]==A2[j]){
            printf("yes");
        }else{
            printf("NO"); } }
	return 0; }