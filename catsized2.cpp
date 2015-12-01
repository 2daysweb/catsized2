/*
catsized2.cpp
Jun 26, 2015
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

int userInput;
string userAnimalChoice;
char answer;

answer = 'y';

while (answer =='y') {
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) <<"-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" <<  setw(1) << endl;
	//printing column title line
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Animal Name" << setw(1) << "|" << setw(15) << left << "Mass/Height" << setw(1) << "|"  << setw(5) << left << " " <<  setw(1) << "|"  << endl;
	//printing border
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
	//printing Hippo line
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Hassan Mohamed" << setw(1) << "|" << setw(15) << left << "10 Kg" << setw(1) << "|"  << setw(5) << left << " " << setw(1) << "|" << endl;
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
	//printing Giraffe line
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Giraffe" << setw(1) << "|" << setw(15) << left << "5.5 m" << setw(1) << "|"  << setw(5) << left << " " << setw(1) << "|" << endl;
	//print out the end table line
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) <<"-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
	//printing Baba line
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Hippo" << setw(1) << "|" << setw(15) << left << "1500 Kg" << setw(1) << "|"  << setw(5) << left << " " << setw(1) << "|" << endl;
	//print out the end table line
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) <<"-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;


cout<<"Please enter what animal unit of measurement you'd like to compare your object to (giraffe or hassan)"<<endl;

cin>>userAnimalChoice;

if (userAnimalChoice == "giraffe") {

int numGiraffes;

cout<<"Please input the height (m) of the object that you'd like to have sizedUp!"<<endl;
cin>>userInput;

numGiraffes = userInput/5.5;

cout<<"Your object is as tall as about "<<numGiraffes<<" Giraffes stacked up!"<< endl << "Would u like to sizeUp something else (y/n?)"<<endl;
cin>>answer;

	}

else {

int numHippos;

cout<<"Please input the mass (kg) of the object that you'd like to have sizedUp!"<<endl;
cin>>userInput;

numHippos = userInput/100;

cout<<"Your object is as heavy as about "<<numHippos<<" Hassan Mohameds COMBINED!" << endl << "Would u like to sizeUp something else (y/n?)"<<endl;
cin>>answer;

}

}

return 0;

}

