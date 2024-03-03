#include <stdio.h>
void array_input(int a[],int size) {
    for(int i=0;i<size;i++) {
        scanf("%d",&a[i]); } }
int main() {
    int N1,N2;
    int A1[20],A2[20];
    scanf("%d",&N1);
    array_input(A1,N1);
    scanf("%d",&N2);
    array_input(A2,N2);
 int c,count2=0;
    for(int i=0;i<N1;i++) {
            if(A2[0]==A1[i]) {
                c=i;
                break; } }
        for(int i=0;i<N2;i++) {
         if(A2[i]==A1[c+i]) {
            count2++; } }
    if(count2==N2) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }