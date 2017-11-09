#include<stdio.h>

int main()
{
	int a[21];
	int i, j = 0;
	int p1, p2, t;
	for (i=0;i<21; i++)
	{
		a[i] = 21-i;
	}
	printf("\n\n\n\t\t\t\t21 FLAGS\n\n\t\t\t\tInstructions.\nThere are 21 flags. Each player can take 1,2 or 3 flags in each turn.The player to take the last flag wins.\n\n\t\t\t|");
	for (i = 0; i<21; i++)
	{
		if (a[i] == 0)
		{
			printf("*|");
		}
		else
			printf("%d|", a[i]);
	}

	printf("\n\n\t\tYou have to play this game against the computer. Are you smarter than a Machine?\n\t\tPress 1 if you want to start or press 2 if you want the computer to start.\n");

	scanf_s("%d", &t);
	if (t == 2)
	{

		while (1)
		{
			if ((21 - j) <= 3)
			{
				printf("\n\n\t\t\t\tCOMPUTER WINS.");
				break;
			}
			p1 = (21 - j) % 4;
			for (i = 0; i<p1; i++)
				a[j++] = 0;

			printf("\nComp took %d flags.\n\n\t\t\t\t |", p1);

			for (i = 0; i<21; i++)
			{
				if (a[i] == 0)
				{
					printf("*|");
				}
				else
					printf("%d|", a[i]);
			}

			if ((21 - j) <= 3)
			{
				printf("\n\n\n\t\t\t\tYOU WIN.");
				break;
			}
			printf("\n\nEnter your choice:");
			while (1)
			{
				scanf_s("%d", &p2);
				if (p2 == 1 || p2 == 2 ||  p2 == 3)
					break;
				printf("\nInvalid choice. Enter again:");
			}

			for (i = 0; i<p2; i++)
			{
				a[j++] = 0;
			}

			printf("\n\t\t\t\t");
			for (i = 0; i<21; i++)
			{
				if (a[i] == 0)
				{
					printf("*|");
				}
				else
					printf("%d|", a[i]);
			}
			printf("\n\nComputer's turn");

		}
	}

	else if (t == 1)

	{
		while (1)
		{

			if ((21 - j) <= 3)
			{
				printf("\n\n\t\t\t\tYOU WIN.");
				break;
			}
			printf("\nEnter your choice:");
			scanf_s("%d", &p2);

			for (i = 0; i<p2; i++)
			{
				a[j++] = 0;
			}

			printf("\n\t\t\t |");
			for (i = 0; i<21; i++)
			{
				if (a[i] == 0)
				{
					printf("*|");
				}
				else
					printf("%d|", a[i]);
			}
			//printf("\n\nComputers turn:press n key");
			if ((21 - j) <= 3)
			{
				printf("\n\n\t\t\t\tCOMPUTER WINS.");
				break;
			}
			if (((21 - j) % 4) == 0)
				p1 = 1;
			else
				p1 = (21 - j) % 4;
			for (i = 0; i<p1; i++)
				a[j++] = 0;
			printf("\n\n Computer took %d flags.\n", p1);
			printf("\n\n\t\t\t |");
			for (i = 0; i<21; i++)
			{
				if (a[i] == 0)
				{
					printf("*|");
				}
				else
					printf("%d|", a[i]);
			}
		
		}
	}
	getchar();
	getchar();
}