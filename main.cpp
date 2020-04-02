#include <iostream>
using namespace std;
int main()
{
	cout << "Enter amounts of cents: ";
    int cent;
    cin >> cent;
    cout << "conversion can be done as :\n" << "Dollars: " << cent/100 << endl << "Quarters: " << (cent%100)/25 << endl << "Dime: " << ((cent%100)%25)/10 << endl <<"Nickels: "<< (((cent%100)%25)%10)/5 << endl << "Pennies: " << ((((cent%100)%25)%10)%5) << endl;
    
    
	return 0;
}
