#include <stdio.h>

int main()
{
	char t[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	printf("%c | %c | %c\n", t[0], t[1], t[2]);
	printf("---+---+---\n");
	printf("%c | %c | %c\n", t[3], t[4], t[5]);
	printf("---+---+---\n");
	printf("%c | %c | %c\n", t[6], t[7], t[8]);

	char player = 'X';
	int win = 0;

	while (1)
	{
		int position;

		printf("Player %c,choose your position: ", player);
		scanf("%d", &position);

		if (position >= 1 && position < 10)
		{
			if (t[position - 1] == 'X' || t[position - 1] == 'O')
			{
				printf("positon is already occupied\n");
			}
			else
			{
				t[position - 1] = player;

				printf("%c | %c | %c\n", t[0], t[1], t[2]);
				printf("---+---+---\n");
				printf("%c | %c | %c\n", t[3], t[4], t[5]);
				printf("---+---+---\n");
				printf("%c | %c | %c\n", t[6], t[7], t[8]);

				if ((t[0] == player && t[1] == player && t[2] == player) ||
				    (t[3] == player && t[4] == player && t[5] == player) ||
				    (t[6] == player && t[7] == player && t[8] == player) ||
				    (t[0] == player && t[3] == player && t[6] == player) ||
				    (t[1] == player && t[4] == player && t[7] == player) ||
				    (t[2] == player && t[5] == player && t[8] == player) ||
				    (t[0] == player && t[4] == player && t[8] == player) ||
				    (t[2] == player && t[4] == player && t[6] == player))
				{
					win = 1;
					printf("Player %c Won\n", player);
					break;
				}
				else if (win != 1)
				{
					int count = 0;

					for (int i = 0; i < 9; i++)
					{
						if (t[i] != '0' + (i + 1))
						{
							count++;
						}
					}

					if (count == 9)
					{
						printf("It's A Draw\n");
						break;
					}
				}

				if (player == 'X')
				{
					player = 'O';
				}
				else
				{
					player = 'X';
				}
			}
		}
		else
		{
			printf("Invalid position\n");
		}
	}

	return 0;
}
