#include<stdio.h>

int main() {
	
	char act;
	float a;
	float b;
	float res;

	printf("Please insert the action you want to do: ");
	scanf("%c",&act);
	
	if (act=='+'||act=='-'||act=='*'||act=='/') {
	
		printf("Great, now insert the number A: ");
		scanf("%f",&a);

		printf("Aaaaand now the B: ");
		scanf("%f",&b);

		switch (act) {
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '/':
			if (b!=0) {
				res=a/b;
			} else {
				printf("oh uhh, zero doesn't work around here. Sorries.");
			}
			break;
		}
		
		if (b!=0 && act !='/') {

			printf("Okay, and here's your result: %f",res);
		
		}

	} else {

		printf("uhh, I guess you messed that up. Try again something different next time.");

	}

}
