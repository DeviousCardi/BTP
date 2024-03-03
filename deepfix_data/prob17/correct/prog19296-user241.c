#include <stdio.h>
int pos(int a1[],int n1,int n) {
    int i;
    for(i=0;i<n1;i++) {
        if(a1[i]==n)
        return i; } }
int contigous(int a1[],int a2[],int n1,int n2) {
    int i,count=0,posi[20];
    for(i=0;i<n2;i++) {
        posi[i]=pos(a1,n1,a2[i]); }
    for(i=0;i<n2-1;i++) {
        if(posi[i+1]-posi[i]==1||posi[i+1]-posi[i]==0)
        count++; }
    if(count==n2-1)
    return 1;
    else
    return 0; }
int main() {
	int a1[20],a2[20];
	int n1,n2,i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	if(contigous(a1,a2,n1,n2)==1)
	printf("YES");
	else
	printf("NO");
	return 0; }