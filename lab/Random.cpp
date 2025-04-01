#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime> 
int main ()
{
    srand(time(0));
    int DaysUntilExpiration = rand() % 12;
    cout << "Days until subscription expires: " << DaysUntilExpiration << endl;
    if (DaysUntilExpiration == 0) {
        cout << "Your subscription has expired. Renew it!" <<endl;
    }
    else if (DaysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" 
        "\nRenew now and save 20%!" << endl;
    }
    else if (DaysUntilExpiration <= 5){
        cout << "Your subscription expires in " << DaysUntilExpiration << "days.\nRenew now and save 10%!" <<endl;
    }
    else if (DaysUntilExpiration <= 10){
        cout << "Your subscription will expires soon. renew now!" << endl;
    }
    else {
        cout << "You ave an active subscription." << endl;
    }
    return 0;
} 

    
