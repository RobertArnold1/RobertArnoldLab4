#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int temp;

	

	string inputFile = "C:/Users/Bobby/source/repos/RobertArnoldLab4/HourlyTemp.dat";
	ifstream inFile;
	inFile.open(inputFile); //find and access the input file

	cout << "-30       0                                                150" << endl << "|         |                                                 |" << endl; // header to the graphs
	while(inFile >> temp)
	if (temp >= -30) // loop gathering variable and checking if it fits the criteria
	{
		if (temp <= 150)
		{
			if (temp >= 0)
			{
				cout << temp << endl << "          |";
				for (int i = 3; i <= temp; i++)
				{
					cout << "*";
						i = i + 2;
				}
				cout << endl; //output for positive temperature graphs
			}
			if (temp < 0)
			{
				cout << temp << endl;
				for (int i = -30; i < temp; i++)
				{
					cout << " ";
					i = i + 2;
				}
				for (int i = -3; i >= temp; i--)
				{
					cout << "*";
					i = i - 2;
				}
				cout << "|";
				cout << endl; // output for negative temperature graphs
			}
		}
		else {
			cout << temp << endl << "OUT OF RANGE" << endl; //output of error outside of 150 degrees
		}
	}
	else {
		cout << temp << endl << "OUT OF RANGE" << endl; //output of error outside of -30 degrees
	}
	inFile.close();
}