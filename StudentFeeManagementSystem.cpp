//REGNO:CT101/G/26595/25
//NAME:ODWORI WANZALA REGAN
//Week 6 Assignment
//CODE:SPC 2204:OOP1

#include <iostream>
#include <string>
using namespace std;

// Class named Student
class Student{
	private:
		//Attributes 
		string StudentName;
		string AdmissionNumber;
		double feeBalance;
		
		public:
			//Function to input student details
		void inputStudent(){
			cout<<"Enter Student Name: "<<endl;
			getline(cin, StudentName);
			cout<<"Enter Admission Number: "<<endl;
			cin>>AdmissionNumber;
			cout<<"Enter Fee Balance: "<<endl;
			cin>>feeBalance;
		}
		
		//Function to make fee payment
		void makePayment(){
			double payment;
			
			cout<<"\nEnter amount to pay: ";
			cin>>payment;
			
			if(payment <= 0){
				cout<<"Invalid payment amount."<<endl;
			}
			else if(payment>feeBalance){
				cout<<"Payment cannot be greater than the fee balance."<<endl;
			}
			else{
				feeBalance = feeBalance - payment;
				cout<<"Payment made successfully!"<<endl;
			}
		}
		//Function to display student details
		void displayStatus(){
		  cout<<"\n------Student Fee Status-----"<<endl;
		  cout<<"Student Name: "<<StudentName<<endl;
		  cout<<"Admission Number: "<<AdmissionNumber<<endl;
		  cout<<"Fee Balance: "<<feeBalance<<endl;	
		}
			
};
		
		int main(){
			//Object of student class
			Student student1;
			
			student1.inputStudent();
			student1.makePayment();
			student1.displayStatus();
return 0;			
}