#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    float b;
    scanf("%d",&a);
    if(a<200000) {
        b=0;
        printf("%.2f",b); }
    if((200000<a)&&(a<=500000)) {
        b=0.1*(a-200000);
        printf("%.2f",b); }
    if((500000<a)&&(a<=1000000)) {
        b=30000+0.2*(a-500000);
        printf("%.2f",b); }
    if(a>1000000) {
        b=130000+0.3*(a-1000000);
        printf(".2f",b); } }
	return 0; }