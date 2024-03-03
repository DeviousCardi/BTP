#include <stdio.h>
int main() {
    int N1,N2,i,j;
    int A1[20],A2[20];
    scanf("%d",&N1);
    for( i=0;i<20 && A1[i]!=EOF;i++)
    {scanf("%d",&A1[i]);}
    for( j=0;j<20 && A2[j]!=EOF;j++)
    {scanf("%d",&A2[j]);
    for(int i=0;i<N1;i++){
    if(A2[j]==A1[i]){break;}
    else {break;printf("NO");} } }
	return 0; }