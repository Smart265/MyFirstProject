#include <iostream>
using namespace std;
int main ()
{
    int DaysUntilExpiration = rand() % 12;
    cout << "Enter the random numbers." <<endl;
    if (DaysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" <<endl;
    }
    if (DaysUntilExpiration <= 5) {
        cout << "Your subscription expires in " <<"DaysUntilExpirationDays"<< endl; 
        cout << "Renew now and save 10%!" << endl;
    }
    return 0;
} 

    
