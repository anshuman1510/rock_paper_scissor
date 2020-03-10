#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int R=1;
	int P=2;
	int S=3;
	int i, c, player=0, comp=0, choice;	
	printf ("For Rock=1\nFor paper=2\nFor Scissor=3\n");
	for (i=0;i<5;i++)
	{
		printf ("Enter your Choice:\n");
		scanf ("%d", &choice);
		if (choice==1)
		printf ("Player Chooses : Rock\n");
		else if (choice==2)
		printf ("Player Chooses : Paper\n");
		else if (choice==3)
		printf ("Player Chooses : Scissor\n");
		c=rand()%3+1;
		sleep(1);
		printf ("Computer Choice = %d\n",c);
		if (c==1)
		printf ("Computer Chooses : Rock\n");
		else if (c==2)
		printf ("Computer Chooses : Paper\n");
		else if (c==3)
		printf ("Computer Chooses : Scissor\n");
		if (choice==1)
		{
			if (c==1)
			{
				printf ("Draw\n");
			}
			if (c==2)
			{
				printf  ("Computer Wins\n");
				comp=comp+1;
			}
			if (c==3)
			{
				printf ("Player Wins\n");
				player=player+1;
			}
		}
		else if (choice==2)
		{
			if (c==2)
			{
				printf ("Draw\n");
			}
			if (c==1)
			{
				printf ("Player Wins\n");
				player=player+1;
			}
			if (c==3)
			{
				printf ("Computer wins\n");
				comp=comp+1;
			}
		}
		else if (choice==3)
		{
			if (c==3)
			{
				printf ("Draw\n");
			}
			if (c==1)
			{
				printf ("Computer Wins\n");
				comp=comp+1;
			}
			if (c==2)
			{
				printf ("Player Wins\n");
				player=player+1;
			}
		}
		else
		printf ("Wrong Choice\n");
	}
	printf ("Computer Score = %d |||||| Player Score = %d\n", comp,player);
	if (comp>player)
	printf ("Computer is the Wnner!!!!\n");
	else if (comp<player)
	printf ("Player is the Winner!!!!\n");
	else if (comp==player)
	printf ("Draw!!!!");
	return 0;
}
