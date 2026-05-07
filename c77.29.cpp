
#include <iostream>
#include<string>
using namespace std;
string read() {
	string s;
	cout << "enter string?\n";
	getline(cin, s);
	return s;
}
enum enwhatcount{capitall=1,smalle=2,all=3};
short countLatter(string s, enwhatcount whatcount=enwhatcount::all) {
	if (whatcount == enwhatcount::all) {
		return s.length();
	}
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (whatcount == enwhatcount::capitall && isupper(s[i])) {
			count++;
		}
		if (whatcount == enwhatcount::smalle && islower(s[i])) {
			count++;
		}
	}
		return count;
	
}
int main()
{

	string s = read();
	cout << countLatter(s,enwhatcount::all)<< endl;
	cout << countLatter(s, enwhatcount::capitall) << endl;;
	cout << countLatter(s, enwhatcount::smalle);
}
