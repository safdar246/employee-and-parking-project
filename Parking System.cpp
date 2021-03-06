#include <iostream>
using namespace std;
class Vehicle{
	const float MINIMUM_FEE, HOURLY_CHARGES, MAXIMUM_FEE;
public:
	Vehicle(float minimum, float hourly, float maximum) :MINIMUM_FEE(minimum), HOURLY_CHARGES(hourly), MAXIMUM_FEE(maximum){
	}
	virtual float calculateParkingFare(float hours){
		if (hours <= 3.0f){
			return MINIMUM_FEE;
		}
		else if (hours <= 20.0f){
			return MINIMUM_FEE + (HOURLY_CHARGES * hours);
		}
		else{
			return MAXIMUM_FEE;
		}
	}
};
class Bike : public Vehicle{
public:
	Bike() :Vehicle(2.0f, 0.5f, 10.0f){}
};
class Car : public Vehicle{
public:
	Car() :Vehicle(4.0f, 1.0f, 20.0f){}
};
class Bus : public Vehicle{
public:
	Bus() :Vehicle(6.0f, 1.5f, 30.0f){}
};
int main(){
	Bike objBike;
	cout << "Fare of Bike parked for 1 hour is " << objBike.calculateParkingFare(1.0f) << endl;
	cout << "Fare of Bike parked for 5 hour is " << objBike.calculateParkingFare(5.0f) << endl;
	cout << "Fare of Bike parked for 24 hour is " << objBike.calculateParkingFare(24.0f) << endl;
	Car objCar;
	cout << "Fare of Car parked for 1 hour is " << objCar.calculateParkingFare(1.0f) << endl;
	cout << "Fare of Car parked for 5 hour is " << objCar.calculateParkingFare(5.0f) << endl;
	cout << "Fare of Car parked for 24 hour is " << objCar.calculateParkingFare(24.0f) << endl;
	Bus objBus;
	cout << "Fare of Bus parked for 1 hour is " << objBus.calculateParkingFare(1.0f) << endl;
	cout << "Fare of Bus parked for 5 hour is " << objBus.calculateParkingFare(5.0f) << endl;
	cout << "Fare of Bus parked for 24 hour is " << objBus.calculateParkingFare(24.0f) << endl;
	return 0;
}