#include<stdio.h>

int main(){

	char c1;
	char c2;
	char c3;

	int n;

	printf("Okay, write the letter 1: ");
	scanf(" %c",&c1);

	printf("Now the letter 2: ");
	scanf(" %c",&c2);

	printf("And lastly the letter 3: ");
	scanf(" %c",&c3);

	printf("Oh, and also please write a number to move the letter: ");
	scanf("%d",&n);

	c1+=n;
	c2+=n;
	c3+=n;

	printf("Okay, here's the code: %c %c %c \n",c1, c2, c3);
}
