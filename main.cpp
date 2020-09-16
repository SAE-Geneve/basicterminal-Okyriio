#include <iostream>

int main ()
{
	std::cout << " Roll your dice between 1 and 8 to beat Boss\n";

	int pvFinaux = 100;
	int value = 0 ;
	std::cin >> value;
	int attaque = 6;
	int defense = 30;
	int attaqueFinale = attaque * value;
	

	bool exit = false;
	
	while ( !exit )
	{
		
		if (attaqueFinale > defense)
		{
			std::cout << "B perd des pv\n";
			pvFinaux = pvFinaux- (attaqueFinale - defense );
		}
		else
		{
			std::cout << "Esquive\n";
		}
		std::cout << pvFinaux << std::endl;
		if (pvFinaux <= 0)
		{
			break;
		}
		system("pause");
	}
	

}