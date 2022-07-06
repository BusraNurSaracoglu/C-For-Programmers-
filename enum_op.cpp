// enum example


#include <iostream>


using namespace std;

int main(){
	
	enum MONTHS { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};
	
	// define bestMonth as a variable type MONTHS 
	MONTHS bestMonth;
	
	//assign bestMonth one of the values of MONTHS
	bestMonth = jan;
	
	//lets check value of the bestMonths just like other variables
	
	if(bestMonth == jan){
		
		cout <<"Fav month is a jan" << endl ;
	}
	
	
	return 0;
	
}
