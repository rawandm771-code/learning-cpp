
#include <iostream>
#include<string>
using namespace std;
string read() {
    string s;
    cout << "enter string \n";
    getline(cin, s);
    return s;
}
string upper(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}
string lower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main()
{
    string s = read();
    s = upper(s);
    cout << s << endl;
    s = lower(s);
    cout << s << endl;
}
