/*
Homework : Lab2
Student : H34011128 Chen, Chih-Yu
Time :  2016/03/17
*/
#include<iostream>
#include<fstream>										 // To use ifstream and ofstream
#include"bmi.h"
#include"stdlib.h"
#include<iomanip>										 // To set precision to 2 digits

int main(){
	bool control = 1;
	int height, weight;
	string line;
	ifstream inFile( "file.in", ios::in );
	ofstream outFile( "file.out", ios::out );
		
	if( !inFile ){
		cerr<<" Infile opening FAILED. " << endl;
		exit(1);
	}
	if( !outFile ){
		cerr<<" Outfile opening FAILED. "<< endl;
		exit(1);									 // To cope with failure of file opening 
	}										          
	while( control ){
		inFile >> height >> weight;							 // To retrieve data
		bmi term ( height, weight );  
		if ( height != 0 && weight != 0 ){
			float actual_num = term.calculate();					 // To calculate the BMI value
			line = term.result( actual_num );					 // To get the category
			outFile << fixed << setprecision(2) << actual_num << " " << line <<endl; // To insert the result into file.out		
		}
		else control = 0;
	}
	inFile.close();
	outFile.close();									 // Remember to close in/outFFiles after usage
}
