#include <stdio.h>
int min(int ar[],int size){
    int i=0,min=10000;
    while(i<=size-1){
        if(ar[i]<min) min=ar[i];
        i++; }
    return min; }
int main()
{   int n1,i;
    scanf("%d",&n1);
    int a1[n1];
    i=0;
    while(i<=n1-1){
        scanf("%d",&a1[i]);
        i++; }
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    i=0;
    while(i<=n2-1){
        scanf("%d",&a2[i]);
        i++; }
	int mini=0;
    mini=min(a1,n1);
    printf("%d\n",mini);
	return 0; }