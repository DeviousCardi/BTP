#include <stdio.h>
int main() {
	int N1,A1[50];
	scanf ("%d\n",&N1);
	for (int i=0;i<N1;i++)
	scanf("%d ",&A1[i]);
	int count=0;
	for (int i=0;i<N1;i++)
{for(int j=i+1;i<N1;i++){if (A1[j]==A1[i]){count++;}}
}if(count==0){printf("YES\n");}
else{printf("KY\n");}
	return 0; }