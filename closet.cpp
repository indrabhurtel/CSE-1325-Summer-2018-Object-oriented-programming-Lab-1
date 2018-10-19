/* Indra Bhurtel */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* variables to read user input*/
	string userInput;
	string name;
	int numOfItems;

	/* read the name*/
	cout << "Hello closet cleaner! Enter your name: ";
	cin >> name;

	/*read the number of items*/
	cout << "How many items do you want to sell? ";
	cin >> numOfItems;
	cout << endl;

	/* create arrays to store items and prices*/
	string items[numOfItems];
	double price[numOfItems];

	/* total sales so far*/
	double totalSales = 0;

	/* read the items and their prices*/
	for(int num = 0; num < numOfItems; num++)
	{
		cout << "Enter item and price: ";
		cin >> items[num] >> price[num];
	}

	cout << endl;

	/* display the border*/
	for(int i = 0; i < name.length() + 10; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << name << "'s Closet!" << endl;
	for(int i = 0; i < name.length() ; i++)
	{
		cout << "*";
	}
	cout << endl << endl;

	cin.ignore();

	do
	{
		/* read what user want to buy*/
		cout << "Hello shopper! What item are you looking for? ";
		getline(cin, userInput);
		bool found = false;
		string userAffirmation;

		/* check for the item in the arrays*/
		for(int i = 0; i < numOfItems; i++)
		{
			if(items[i] == userInput)
			{
				/* display the price*/
				cout << "We have " << items[i] << " for $" << price[i] << ". Would you like to buy them? ";
				cin >> userAffirmation;

				if(userAffirmation == "yes")
				{
					/* udpate sales so far*/
					totalSales += price[i];
				}

				cout << "Ok!" << endl;

				found = true;
				cin.ignore();
			}
		}

		/*check if balance is requested*/
		if(userInput == "check balance")
			cout << "Hello " << name << "! So far you have made $" << totalSales << "." << endl;
		else if(!found && userInput != "exit")
			cout << "Sorry, we don't have that." << endl;
		else if(userInput == "exit")
			break;

		cout << endl;
	}
	while(userInput != "exit");
	cout << "Bye!" << endl;

	return 0;
}
