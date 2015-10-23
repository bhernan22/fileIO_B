// Bianca Hernandez
// Created: October 22, 2015
// Summary: 
//
//************************************************************

#include <iostream>
#include <string>
#include <fstream> // files
#include <cstdlib> //
#include <iomanip> // precision

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	char  fileName[12];
	string firstName, lastName , highScore;
	double score1, score2, score3, score4, score5, score6;
	double max = 71.83;
	
	fout.open("result.txt");
	
	cout << "Enter which file you would like to use (e.g data.txt): ";
	cin >> fileName;
	
	fin.open(fileName);
	if(fin.fail())
	{
		cout << "Error in input file." << endl;
		exit(1);
	}
	
	while (fin  >> firstName >> lastName >> score1 >> score2 >> score3 >> score4 >> score5 >> score6)
	{	
		double avg = (score1 + score2 + score3 + score4 + score5 + score6) / 6;
		
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << firstName;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << lastName;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score1;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score2;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score3;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score4;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score5;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << score6;
		fout << setw(12) << fixed << setprecision(2) << left;
		fout << avg << endl;
		
		if (avg > max)
		{
			max = avg;
			highScore = firstName + " " + lastName;
		}
	}
	fout << "\nHighest Score: " << highScore << endl;
	
	fin.close();
	fout.close();
	return 0;
}
