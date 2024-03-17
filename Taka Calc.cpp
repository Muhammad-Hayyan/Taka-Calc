/* MUHAMMAD HAYYAN
 23I-2041___CY-A
 Assignment#03____Q4 */
 
#include <iostream>
using namespace std;

int main()
{
		//Program that displays total number of currency notes
	int money, notes;
	
	cout<< "\nEnter the amount of money in Takas:\t";
	cin>> money;
	
	cout<< "\n\t Currency Note:\t\tNumber";
	
		//calculating notes
	notes = money/650;
	money = money%650;
	cout<< "\n\t\t 650\t\t "<<notes;
	
	notes = money/330;
	money = money%330;
	cout<< "\n\t\t 330\t\t "<<notes;
	
	notes = money/110;
	money = money%110;
	cout<< "\n\t\t 110\t\t "<<notes;
	
	notes = money/60;
	money = money%60;
	cout<< "\n\t\t 60\t\t "<<notes;
	
	notes = money/10;
	money = money%10;
	cout<< "\n\t\t 10\t\t "<<notes;
	
	notes = money/5;
	money = money%5;
	cout<< "\n\t\t 5\t\t "<<notes;
	
	notes = money/1;
	money = money%1;
	cout<< "\n\t\t 1\t\t "<<notes;
	
	return 0;
}
