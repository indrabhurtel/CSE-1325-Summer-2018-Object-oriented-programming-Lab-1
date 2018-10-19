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

	/* created arrays to store shapes and shape info*/

	string shapes[] = {"Triangle","Square","Circle"};
	string info[] = {"area=(base*height)/2", "area=length*length\nperimeter=4*length","area=2*3.14*radius*radius\nperimeter=2*3.14*radius"};

	cout << "********" << endl;
	cout << "Shapes!" << endl;
	cout << "********" << endl << endl;

	int counter = 1;

	do
	{
		cout << counter << ". Shape: ";
		cin >> userInput;
		bool found = false;
		for(int i = 0; i < 3; i++)
		{
			if(shapes[i] == userInput)
			{
				cout << info[i] << endl;
				found = true;
			}
		}

		if(!found && userInput != "exit")
			cout << "Sorry, information for this shape is not available." << endl;

		cout << endl;

		counter++;
	}
	while(userInput != "exit");

	cout << "-" << (counter - 2) << " shapes entered." << endl;
	cout << "Exiting..." << endl;

	return 0;
}
