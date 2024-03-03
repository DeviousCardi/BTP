#include <stdio.h>
int main() {
	int N1,N2,i,j;
	int a1[10];
    int a2[10];
    int count;
    scanf("%d",&N1);
    for(i=0;i<N1;i++) {
                  scanf("%d",&a1[i]); }
	scanf("%d",&N2);
	for(i=0;i<N2;i++) {
                    scanf("%d",&a2[i]); }
for(i=0;i<N1;i++){
        for(j=0;j<N2;j++)
                     { count=0;
                         if(a2[j]==a1[i]){count++;
                                         i++; }
                         else continue; } }
if(count==N2-1){printf("YES");}
 else printf("NO");
	return 0; }