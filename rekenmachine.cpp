#include <stdio.h>
#include <conio.h>

int main(void) {
	int a;

	printf("What do you want to do? (type the number)\n 1. calculator\n 2. snake\n");
	scanf_s("%d", &a);

	if (a == 1)
	{
		int b;
		float c;
		float d;

		printf("What do you want to do? (type the number)\n 1. add\n 2. substract\n 3. multiplication\n 4. division\n");
		scanf_s("%d", &b);
		if (b == 2)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%f %f", &c, &d);
			printf("%f - %f = %f", c, d, c - d);
		}
		else if (b == 1)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%f %f", &c, &d);
			printf("%f + %f = %f", c, d, c + d);
		}
		else if (b == 3)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%f %f", &c, &d);
			printf("%f * %f = %f", c, d, c * d);
		}
		else if (b == 4)
		{
			printf("type 2 numbers (seperated by space)\n");
			scanf_s("%f %f", &c, &d);
			printf("%f / %f = %f", c, d, c / d);
		}
	}
	if (a == 2) 
	{
		int start_game;
		
		printf("type '1' when you want to start the game\n");
		scanf_s("%d", &start_game);
		
		if (start_game == 1) 
		{
			int alive = 1;

			while (alive == 1) 
			{
				int x = 0;
				int y = 0;
				int dir = 0;
				int wall;
				int snake_head;
				int snake_body;


			}
		}
		else if (start_game != 1) 
		{
			//if enter something else then 1
			printf("that is not an option\n");

		}

	}
	return 0;
}