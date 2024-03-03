#include <stdio.h>
#include <stdlib.h>
int main() {
    int d1,d2,i,j,k,l,m;
    static int count1=1,count2=1
    scanf("%d\n%d\n",&d1,&d2);
    char num1[d1];
    char num2[d2];
    char rev1[d1+1];
    char rev2[d2+1];
    char sum[501]
    int n1,n2;
    n1=getchar();
    for(i=0;i<d1;i=i+1)
    { n1=num1[i];
      n1=getchar();
        count1=count+1; }
    n2=getchar();
    for(j=0;j<d2;j=j+1)
    {n2=num[j];
    n2=getchar();
        count2=count2+1 }
     for(k=0;k<501;k=k+1)
     {sum[k]=num1[count1-1-k]+num2[count2-1-k];
      printf("%c",sum[k])
	return 0; }