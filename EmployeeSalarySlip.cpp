#include <iostream>
using namespace std;
class EmployeeSalarySlip{
public:
	void PrintSalarySlip(){
		cout << endl;
		cout << "Enter the Designation of Employee : " << endl;
		cout << "Also Enter Employee Fuel and Medical Allowance : " << endl;
		cout << endl;
	}
};
class ManagerSalarySlip : public EmployeeSalarySlip{
public:
	int GrossSalary;
	void PrintSalarySlip(float baseSalary, float fuelAll, float MedicalAll){
		EmployeeSalarySlip::PrintSalarySlip();
		//float FA = baseSalary * fuelAll/100;
		// float MA = baseSalary * MedicalAll/100;
		//GrossSalary = baseSalary + FA + MA;
		GrossSalary = baseSalary + fuelAll + MedicalAll;
		//GrossSalary = ((baseSalary * fuelAll)/100) + ((baseSalary * MedicalAll)/100) + baseSalary;
		cout << "GrossSalary of Manager is : " << GrossSalary << endl;
	}
};
class EngineerSalarySlip : public EmployeeSalarySlip{
public:
	int GrossSalary;
	void PrintSalarySlip(float baseSalary, float fuelAll, float MedicalAll){
		EmployeeSalarySlip::PrintSalarySlip();
		GrossSalary = baseSalary + fuelAll + MedicalAll;
		// GrossSalary = ((baseSalary * fuelAll)/100) + ((baseSalary * MedicalAll)/100) + baseSalary;
		cout << "GrossSalary of Engineer is : " << GrossSalary << endl;
	}
};
class AnalystSalarySlip : public EmployeeSalarySlip{
public:
	int GrossSalary;
	void PrintSalarySlip(float baseSalary, float fuelAll, float MedicalAll){
		EmployeeSalarySlip::PrintSalarySlip();
		GrossSalary = baseSalary + fuelAll + MedicalAll;
		// GrossSalary = ((baseSalary * fuelAll)/100) + ((baseSalary * MedicalAll)/100) + baseSalary;
		cout << "GrossSalary of Analyst is : " << GrossSalary << endl;
	}
};
int main() {
	ManagerSalarySlip obj1;
	EngineerSalarySlip obj2;
	AnalystSalarySlip obj3;
	//obj1.PrintSalarySlip();
	//ManagerSalarySlip obj1;
	obj1.PrintSalarySlip(1500, 250, 1000);
	obj2.PrintSalarySlip(1500, 100, 500);
	obj3.PrintSalarySlip(1500, 150, 800);
	return 0;
}