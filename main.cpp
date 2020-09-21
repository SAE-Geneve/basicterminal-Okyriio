#include <iostream>
#include <chrono>
#include <Windows.h>
#include <string>
#include <string_view>
void where()
{
	std::cout << "Bathroom\n";
}
void move()
{
	std::cout << "Where do you wanna go ?";
}
void Bathroom()
{
	std::cout << "Wanna take a bath ? kidding, pick up that bat.\n";
	std::cout << "Pick it up ? Go Back ?";
}
void Rat()
{
	std::cout << "A wild rat appears !\n What are you gonna do ?\n Attack ? Run ?";
}
void exit()
{
	return;
}
void Attack()
{
	int PVrat = 10;
	bool attacking = true;
	std::cout << "You're fighting the RAT !\n What do we do now ?\n Hit ?\n Defense ?(You can only hit honestly)\n";
	while (attacking)
	{
		std::string choice;
		std::getline(std::cin, choice);
		if (choice == "hit")
		{
			PVrat = PVrat - 2;
			std::cout << PVrat << "\nPV\n";		}	
		if (PVrat <= 0)
		{
			attacking = false;
			std::cout <<  "You've just won nothing congrats\n ! Write exit to quit\n Or write again to play again\n";
		}	
	}
}
int main()
{
	bool playing = true;
	std::cout << "Hey !\n";
	std::cout << " Enter username ";
	std::string Username;
	std::getline(std::cin, Username);
	std::cout << "Welcome ! " << Username;
	std::cout << " What you wanna do ?\n You are alone at home, your parents went out for the week end but are in their way home.\n You gotta take care of that Rat in the bathroom before they come back.\n Go there ? (Yes/NO)\n";
	while (playing)
	{
		std::string value;
		std::getline(std::cin, value);
		if (value == "again")
		{
			main();
		}
		if (value == "Run") {

			playing = false;
			std::cout << "You failed Loser.";
		}
		if (value == "Go back") {

			playing = false;
			std::cout << "You failed Loser.\n The Rat lived and killed your parents.";
		}
		if (value == "No") {
			
			playing = false;
			std::cout << "You failed Loser.";
		}
		if (value == "Yes") {
			Bathroom();
		}
		if (value == "where") {
			where();
		}
		if (value == "Pick it up")
		{
			Rat();
		}
		if (value == "Attack")
		{
			Attack();// système d'attaque et de defense ( points de vie, randomizer etc..)
		}
		if (value == "exit") {
			MessageBox(nullptr, "around !", "See you", MB_ICONEXCLAMATION);
			//std::cout << "See you around.";
			return 0;	
		}
	}
	
}