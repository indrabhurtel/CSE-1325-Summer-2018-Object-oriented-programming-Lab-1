/* Indra Bhurtel */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
     /* variables to read user input*/
	string userInput;

	/* Conversion factor*/

	double KILO_TO_LB = 2.205;

	do
	{
	    /* read the name and weight*/
		cout << "Please enter your name and weight. ";
		getline(cin, userInput);

		istringstream splitter(userInput);

		string name = "";
		int weight = -1;
		string unit = "";

		splitter >> name >> weight >> unit;

		if(name == "exit")
		{
			cout << "Exiting..." << endl;
		}
		else if( unit == "")
		{
			cout << "Not enough info to convert." << endl;
		}
		else
		{
			cout << "Hi " << name << "- you weigh ";
			if(unit == "kilos")
			{
				cout << fixed << setprecision(1) << (weight * KILO_TO_LB) << " pounds" << endl;
			}
			else
			{
				cout << fixed << setprecision(1) << (weight / KILO_TO_LB) << " kilos" << endl;
			}
		}

		cout << endl;
	}
	while(userInput != "exit");

	return 0;
}
