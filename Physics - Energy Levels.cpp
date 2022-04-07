#include <iostream> //Standard Input Output Library file
int main()
{
	//We declare various variables we use
	int n , i;
	double a, b{}, c{}, energy{}, gs{};
	
	//Value of plank's constant squared then divided by 8 as its constant throughout for any energy level
	//Plank's constant = 6.626*10e-34 m^4 kg^2 s^-2
	a = 5.4875e-68; 
	
	//Several statements to get inputs of variables of both micro and macro scopic systems
	std::cout << "Enter the number of energy levels of excited states you want to find for a particle in a system\n";
	std::cin  >> n;
	std::cout << "\nEnter mass of the particle (in KG)\n";
	std::cin  >> b;
	std::cout << "\nEnter the dimension of the space the particle is present at 1 dimensional system (in meters)\n";
    std::cin  >> c;
	
	//Calculating ground state level of the system
	energy = a / (b * c * c);
	std::cout << "\nGround state energy of particle is:  " << energy << '\n';

	/*
	Assigning it to another variable as we would be varying the energy function here to
	calulate various energy levels
	*/
	gs = energy;
	
	//Simple loop to repeatedly calculate and print energy level values
	for (i = 2; i-1 <= n; i++)
	{
		energy = i * i * gs;
		std::cout << "Energy at excited state " << i-1 << " is:  " << energy << '\n';
	}
	return 0;
}