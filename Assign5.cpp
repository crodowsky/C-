//Created by Cherie Rodowsky 10/07/2013

#include <iostream>

using namespace std;

int main ()

{	int x;			//declare variables
	int TownA;
	double TownAgrowth;
	int TownB;
	double TownBgrowth;	
	int counter;
	
	cout << "Enter the Population of town A: ";					//Ask user to input population for Town A
		cin>> TownA;											//value assigned to variable for Town A
	cout << "Enter the annual growth rate of town A (as an integer): ";	//Ask user to input population growth for Town A
		cin >> TownAgrowth;										//value assigned to variable for Town A growth
		
	cout << "Enter the Population of town B: ";					// Ask user to input population for Town B
		cin >> TownB;											// Value assigned to variable for Town B
	cout << "Enter the annual growth rate of town B (as an integer): ";	// Ask user to input population growth for Town B
		cin >> TownBgrowth;										// Value assigned to variable for Town B growth

		if (TownA < TownB)									// Begin If statement for Town A poplulation being less that Town B
				{
					if (TownAgrowth < TownBgrowth)			// Begin if statement for town A population growth being less than Town B
						cout << "This data is incorrect. ";	// error output for town A population growth less than Town B
					else if
						(TownAgrowth > TownBgrowth)			//Begin else statement for Town A growth being greater than Town B
						
						counter = 0;						// count control variable set to 0
						while (TownA <= TownB)				//begin while loop for Town A Population being less than Town B
						{
							TownA = TownA *(TownAgrowth *.01) + TownA;	//Calulation for Town A annual growth
							TownB = TownB * (TownBgrowth *.01) + TownB;	// calulation for Town B annual growth

							cout << "Town A population will be: " <<TownA << endl;	// Output of Town A annual growth
							cout << "Town B population will be: " << TownB<< endl;	//Output of Town B annual growth
							cout << "Town A popultation will exceed Town B in "		//Output for number of years until Town A poplation is equal to
								 << counter++ << " years."							// or less than Town B.  
																					//Calulation for while loop execution count.
								<< endl;
						}											// end of while loop
				}									// end of if else statement 
						
		else if (TownA > TownB)					// Begin of else statement for town A poplution greater than town B
			cout << "The popultation of Town A is greater than Town B" // error Output for town A population being greater than town B
			<< endl;									// end of if else statemtn
					

		cin>>x;										// end of program
}