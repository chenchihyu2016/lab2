#include<string>
#include<cstring>
using namespace std;
class bmi{
	public:
		bmi();								// Default Constructor
		bmi( int height, int weight );					// Constructor 
		void setFunc( int height, int weight );				// The set function
		void getFunc( int &height, int &weight );			// The get function
		float calculate();						// The calculation function
		string result( float actual_num );				// The category function
	private:
		int height;
		int weight;
};
