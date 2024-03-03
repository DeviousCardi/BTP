#include <stdio.h>
int main() {
int m,n1,n2,a1[n1],a2[n2];
scanf("%d",&n1);
for (int i=0;i<n1;i++)
scanf("%d",&a1[i]);
scanf("%d",&n2);
for (int k=0;k<n2;k++)
scanf("%d",&a2[k]);
for (int l=0;l<n1;l++) {
    if(a1[l]==a2[0])
      { if (l+n2>=n1-1) {
            printf("NO");
            break; }
        else {
          for (int h=0;h<n2;h++)
          m=(a1[l+h]==a2[h]); } } }
        if (m==n2) {printf("YES");}
        else {printf("NO");
	return 0; }