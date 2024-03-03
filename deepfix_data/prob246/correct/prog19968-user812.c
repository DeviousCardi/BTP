#include <stdio.h>
void aa(char a[],int n){
    int d,k;
    d=(n-1)/2;
    k=0;
    int b[d];
    for(int i=0;i<n;i++){
        if(48<a[i]<57){
        b[k]=a[i]-48;
        k++; } }
    int c[d];
    for(int i=0;i<d;i++){
        c[i]=0; }
    for(int i=0;i<d;i++){
        c[b[i]]++; }
    for(int i=0;i<d;i++){
        if(b[i]!=c[b[i]])
        printf("NO");
        else
        printf("YES"); }
    return; }
int main() {
	char c;
	scanf("%c",c);
	printf("%d",c-48);
	return 0; }