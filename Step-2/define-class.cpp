#include <iostream>

// Use standard namespace for convenience
using namespace std;

// Create a custom namespace
namespace Vehicles {

    // Define a class inside the namespace
    class Car {
    public:
        string brand;
        string model;
        int year;

        void honk() {
            cout << "Beep beep!" << endl;
        }

        void displayInfo() {
            cout << "Brand: " << brand 
                 << ", Model: " << model 
                 << ", Year: " << year << endl;
        }
    };

}

int main() {
    // Create an object using the namespace
    Vehicles::Car myCar;

    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    myCar.honk();
    myCar.displayInfo();

    return 0;
}
