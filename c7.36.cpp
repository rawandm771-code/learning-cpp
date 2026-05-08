

#include <iostream>
#include<string>
using namespace std;
string read() {
    string s;
    cout << "enter string?\n";
    getline(cin, s);
    return s;
}
int printcountWord(string s) {
    string delim = " ";
    int count = 0;
    int pos = 0;
    string sword;
    while ((pos = s.find(delim)) != std::string::npos) {
        sword = s.substr(0, pos);
        if (sword != "") {
            count++;

        }
        s.erase(0, pos + delim.length());
    }
    if (s != " ") {
        count++;
    }
    return count;
}

int main()
{
    string s = read();
    cout << printcountWord(s)<<endl;
}
