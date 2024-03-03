#include <stdio.h>
int bakait(int a,int b)
{for(int i=0;i<20;i++){
    if(A2[0]==A1[i]){for (int j=i,int k=1;j<a && k<b;j++,k++){if (A2[1]==A1[j+1]){continue;}
    else{break;return 0;}}
    return 1; }
int main() {
    int N1,N2,i,j;
    int A1[20],A2[20];
    scanf("%d",&N1);
    for( i=0;i<20 && A1[i]!=EOF;i++)
    {scanf("%d",&A1[i]);}
    for( j=0;j<20 && A2[j]!=EOF;j++)
    {scanf("%d",&A2[j]);}
    int c= bakait(N1,N2);
    if(c=1){printf("YES");}
    else {printf("NO");} }
	return 0; }