#include <stdio.h>
int main() {
	float A_mid,B_mid,C_mid,A_end,B_end,C_end,A,B,C,median;
	scanf("%.1f%.1f%.1f",&A_mid,&B_mid,&C_mid);
	printf("/n");
    scanf("%.1f%.1f%.1f",&A_end,&B_end,&C_end);
    A=A_mid*40/50+A_end*60/100;
    B=B_mid*40/50+B_end*60/100;
    C=C_mid*40/50+C_end*60/100;
    if((A>=B&&A<=C)||(A>=C&&A<=B))
    median=A;
    else if((B<A&&B>C)||(B<C&&B>A))
    median=B;
    else
    median=C;
    printf("Median weighted score is=%d",median);
	return 0; }