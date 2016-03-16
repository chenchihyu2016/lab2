#include"bmi.h"
#include"math.h"
bmi::bmi(){									 // Default constructor
	setFunc( 1, 1 );
}
bmi::bmi( int height, int weight ){
	setFunc( height, weight );						 
}
float bmi::calculate(){
	int height, weight;
	getFunc( height, weight );
	return weight/( pow(( height*0.01 ), 2) );
}
string bmi::result( float actual_num ){
	if ( actual_num >= 40 ) return "Obese Class III (Very severly obese)";
	else if ( actual_num >= 35 ) return "Obese Class II (Severly obese)";
	else if ( actual_num >= 30 ) return "Obese Class I (Moderate obese)";
	else if ( actual_num >= 25 ) return "Overweight";
	else if ( actual_num >= 18.5 ) return "Normal";
	else if ( actual_num >= 16.0 ) return "Underweight";
	else if ( actual_num >= 15.0 ) return "Severly underweight";
	else return "Very severly underweight";
}
void bmi::setFunc( int height_data, int weight_data ){
	height = height_data;						         // To set the parameters
	weight = weight_data;
}
void bmi::getFunc( int& height_in, int& weight_in ){				 // To retrieve data
	height_in = height;
	weight_in = weight;
} 
