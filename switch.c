#include <stdio.h>

int main() {
	int num1,num2;
	char op;
	int var;
	printf("Enter the operator:");
	scanf("%c",&op);
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);

	switch (op) {
	case '+':
		var=num1+num2;
		printf("Sum is %d\n",var);
		break;
	case '-':
		var=num1-num2;
		printf("Difference is %d\n",var);
		break;
	case '*':
		var=num1*num2;
		printf("Multiply is %d\n",var);
		break;
	case '/':
		var=num1/num2;
		printf("Division is %d\n",var);
		break;
	case '%':
		var=num1%num2;
		printf("Modulus is %d\n",var);
		break;
	default:
		printf("Invalid Character\n");
		break;
		
	}
return 0;
}
