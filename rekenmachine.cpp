#include <stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	printf("What do you want to do? (type the number)\n 1. calculator\n");
	scanf_s("%d", &a);

	if (a == 1)
	{
		printf("What do you want to do? (type the number)\n 1. add\n 2. substract\n 3. multiplication\n 4. division\n");
		scanf_s("%d", &b);
		if (b == 2)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%d %d", &f, &g);
			printf("%d - %d = %d", f, g, f - g);
		}
		else if (b == 1)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%d %d", &c, &d);
			printf("%d + %d = %d", c, d, c + d);
		}
	}
	return 0;
}