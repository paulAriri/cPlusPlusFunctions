#include <iostream>
using namespace std;

int main() {
    //Declaration of variables
	int medium;
	int feet;

	//Table of values
	cout << "     The following table shows the approximate speed of sound, " << endl;
	cout << "     measured in feet per second, in air, water, and steel.\n" << endl;
	cout << "       **************************************************" << endl;
	cout << "       **************************************************" << endl;
	cout << "       **  Medium           **    Speed (feet per sec) **" << endl;
	cout << "       **************************************************" << endl;
	cout << "       **************************************************" << endl;
	cout << "       **  Air(A)           **    1,100                **" << endl;
	cout << "       **  Water(W)         **    4,900                **" << endl;
	cout << "       **  Steel(S)         **   16,400                **" << endl;
	cout << "       **************************************************" << endl;
	cout << "       **************************************************" << endl;

	cout << "\n\n" << endl;

	//Using Nested If Statement.
	cout << "This program calculates the number of feet a\n"
		<< "sound wave will travel in the selected medium\n";
	cout << "Select a medium from the following menu:\n";
	cout << " 1 = Air\n";
	cout << " 2 = Water\n";
	cout << " 3 = Steel\n";
	cin >> medium;
	
		if (medium == 1)
		{
			cout << "How many feet will the sound wave travel in air?" << endl;
			cin >> feet;
			if (feet < 0) {
				cout << "Error! Distance must be greater than zero.\n";
			}
			else {
				cout << "It will take " << feet / 1100 << " seconds for the sound wave to travel " << feet << " feet in air." << endl;
			}
		}
		else
		{

			if (medium == 2)
			{
				cout << "How many feet will the sound wave travel in the medium?" << endl;
				cin >> feet;
				if (feet < 0) {
					cout << "Error! Distance must be greater than zero.\n";
				}
				else {
					cout << "It will take " << feet / 4900 << " seconds for the sound wave to travel " << feet << " feet in water." << endl;
				}
			}
			else
			{
				if (medium == 3)
				{
					cout << "How many feet will the sound wave travel in the medium?" << endl;
					cin >> feet;
					if (feet < 0) {
						cout << "Error! Distance must be greater than zero.\n";
					}
					else {
						cout << "It will take " << feet / 16400 << " seconds for the sound wave to travel " << feet << " feet in steel." << endl;
					}
				}
				else
					{
						cout << "Unknown type of media. Try again." << endl;
					}


			}
		}
		

	
	cout << "\n\n" << endl;

	//Using If / Else If Statement 
	cout << "This program calculates the number of feet a\n"
		<< "sound wave will travel in the selected medium\n";
	cout << "Select a medium from the following menu:\n";
	cout << "1 = Air\n";
	cout << "2 = Water\n";
	cout << "3 = Steel\n";
	cin >> medium;
	

	
	if (medium == 1) {
		cout << "How many feet will the sound wave travel in the medium?" << endl;
		cin >> feet;
		if (feet < 0) {
			cout << "Error! Distance must be greater than zero.\n";
		}
		else {
			cout << "It will take " << feet / 4900 << " seconds for the sound wave to travel " << feet << " feet in water." << endl;
		}
	}
	else if (medium == 2) {
		cout << "How many feet will the sound wave travel in the medium?" << endl;
		cin >> feet;
		if (feet < 0) {
			cout << "Error! Distance must be greater than zero.\n";
		}
		else {
			cout << "It will take " << feet / 4900 << " seconds for the sound wave to travel " << feet << " feet in water." << endl;
		}
	}
	else if (medium == 3) {
		cout << "How many feet will the sound wave travel in the medium?" << endl;
		cin >> feet;
		if (feet < 0) {
			cout << "Error! Distance must be greater than zero.\n";
		}
		else {
			cout << "It will take " << feet / 4900 << " seconds for the sound wave to travel " << feet << " feet in water." << endl;
		}
	}
	else {
		cout << "Unknown type of media. Try again." << endl;
	}

	cout << "\n\n" << endl;

	//Using the Switch Statement.
	cout << "This program calculates the number of feet a\n"
		<< "sound wave will travel in the selected medium\n";
	cout << "Select a medium from the following menu:\n";
	cout << "1 = Air\n";
	cout << "2 = Water\n";
	cout << "3 = Steel\n";
	cin >> medium;
	cout << "How many feet will the sound wave travel in air?" << endl;
	cin >> feet;
	if (feet < 0) {
		cout << "Error! Distance must be greater than zero.\n";
	}
	else {
		switch (medium)
		{
		case 1:
			
			cout << "It will take " << feet / 1100 << " seconds for the sound wave to travel " << feet << " feet in air." << endl;
			break;
		case 2:
			cout << "It will take " << feet / 4900 << " seconds for the sound wave to travel " << feet << " feet in water." << endl;
			break;
		case 3:
			cout << "It will take " << feet / 16400 << " seconds for the sound wave to travel " << feet << " feet in steel." << endl;
			break;
		default:
			cout << "Unknown type of media. Try again." << endl;
		}
	}

	system("pause");
	return 0;
}
