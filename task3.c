#include<stdio.h>

int main(){

	int a;
	int b;
	int c;

	int d;

	printf("Enter number A: ");
	scanf("%d",&a);

	printf("Enter number B: ");
	scanf("%d",&b);

	printf("Enter number C: ");
        scanf("%d",&c);

	d = b*b-4*a*c;

	printf("Okay, here's the diskriminant: %d \n", d);

}
