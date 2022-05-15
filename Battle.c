#include <stdio.h>
#include <stdlib.h>    
#include <string.h>
#include <conio.h>

int main()
{
	//Player and enemy health points
	int Phealth = 100;
	int Ehealth = 100;

	//Damage per Attack type
	int staticplayerdamage = 10;
	int staticenemydamage = 5;
	int critplayerdamage = rand() % 5 + 10;
	int critenemydamage = rand() % 15;

	int Playerchoice;
	int Computerchoice = 1;



	//Turns will keep going until either players Health reaches 0
	while (Phealth > 0 && Ehealth > 0) {

		int critplayerdamage = rand() % 5 + 10;
		int critenemydamage = rand() % 15;

		// Attacking player will decide their attack type
		printf("------- Players Health:%d /// Enemys Health:%d---------\n", Phealth, Ehealth);
		printf("--------- It is your turn to attack now! -----------\n");
		printf("///  Enter '1' for Normal Damage  /// Enter '2' for Critical Damage /// Enter '3' for Heal ///\n");
		scanf("%d", &Playerchoice);

		switch (Playerchoice) {

			//Normal attack will have a set amount which is 5 damage
		case 1:
			printf(" You have selected to attack with a Normal Attack!\n");
			Ehealth = Ehealth - staticplayerdamage;
			int damage;
			damage = staticplayerdamage;
			printf(" Player has dealt %d Damage to the Enemy\n", damage);
			break;

			// Critical hit will have a random amount added to the base damage amount which is 5 + 10
		case 2:
			printf(" You have selected to attack with a Critical hit!\n");
			Ehealth = Ehealth - critplayerdamage;
			int damage1;
			damage1 = critplayerdamage;
			printf(" Player dealt %d Damage to the Enemy!\n", damage1);
			break;

			// Heal 	
		case 3:
			printf("You have Selected HEAL!\n");
			Phealth = Phealth + 10;
			int HEAL;
			HEAL = 10;
			printf(" Player Healed %d Health Points!\n", HEAL);
			break;

			// Will print text if number is not found
		default:
			printf(" Not a valid Choice! Please chose again!\n");
			break;
		}

		// Enemys turn
		// Enemy will always attack with critical damage (random amount out of 15)
		switch (Computerchoice)

		{
		case 1:
			printf(" The Enemy Player has thrown a gigantic rock towards your face!\n");
			Phealth = Phealth - critenemydamage;
			int damage4;
			damage4 = critenemydamage;
			printf(" Enemy dealt %d Damage!\n", damage4);
			break;

		

		}

		system("pause");
		system("cls");
	}

	printf("---------This is the End of the Battle!!!!----------\n");
	printf("  Enemy has %d  Health left.....\n", Ehealth);
	printf("  Player has  %d Health left....\n", Phealth);
	printf("----------Who has won this battle?!?!----------  \n");
	
	if (Phealth <= 0) {
		printf("You have lost this fight.... May the next battle be in your favor..... \n");
	}
	if (Ehealth <= 0) {
		printf("You have Won this fight...May the next battle be in your favor.... \n");
	}

	return 0;

}