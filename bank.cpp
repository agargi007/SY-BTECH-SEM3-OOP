#include <iostream>
#include <string>
using namespace std;

class bank
{
	private:
		string name;
		int acc_no;
		float balance;
		string acc_type;
		
	public:
		void getData()
		{
			cout << "enter name: ";
			cin >> name;
			cout << "\nenter acc number: ";
			cin >> acc_no;
			cout << "\nenter balance: ";
			cin >> balance;
			cout << "\nenter account type (savings / salary / FD / NRI): ";
			cin >> acc_type;
		}
		
		void ministatement()
		{
			cout << "--- Mini-Statement of Account Holder ---" << endl;
			cout << "Name: " << name << endl;
			cout << "Account number: " << acc_no << endl;
			cout << "Balance: " << balance << endl;
			cout << "Account Type: " << acc_type << endl;
		}
};

int main()
{	
	bank b1;
	bank b2;
	
	cout << "user 1:" << endl;
	b1.getData();
	b1.ministatement(); 
	
	cout << "\nuser 2:" << endl;
	b2.getData();
	b2.ministatement(); 
	
	return 0;
}
