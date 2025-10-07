#include <iostream>

using namespace std;
int main() {
string password, verifyPassword, username, verifyUsername;


cout << "Set username" << endl;
cin >> username;
 cout<<"Set password"<<endl;
 cin>>password;
 
cout << endl;
cout << endl;

 while (true) {
 cout << "Enter username" << endl;
 cin >> verifyUsername;
 cout << "Enter password" << endl;
 cin >> verifyPassword;
 cout << endl;
 
 
if (password == verifyPassword && username == verifyUsername) {
	cout << "\033[32mSuccesful\033[0m" << endl;
	break;
	}

else
	cout << "\033[31mWrong Credentials!\033[0m" << endl;
cout << endl;
cout << endl;
cout << "Try Again!";
cout << endl;
cout << endl;
}
	return 0;
}
