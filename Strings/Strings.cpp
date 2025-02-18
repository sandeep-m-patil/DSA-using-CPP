#include <iostream>
using namespace std;
int main()
{

    string s1 = "sandeep";
    string s2 = "patel";
    string s3;
    cout << "Enter any string with spaces allowed : ";
    getline(cin, s3);
    cout << s3 << endl;
    cout << "s1 = " << s1 << "\n" << "s2 = " << s2 << endl;
    cout << "s1.size() = " << s1.size() << endl;
    cout << "s1.length() = " << s1.length() << endl;
    cout << "s1.at(0) = " << s1.at(0) << endl;
    cout << "s1.append(s2) = " << s1.append(s2) << endl;
    cout << "s1.substr(3,4) = " << s1.substr(3, 4) << endl;
    cout << "s1.find(\"a\") = " << s1.find("a") << endl;
    cout << "s1.rfind(\"a\") = " << s1.rfind("a") << endl;
    cout << "s2.replace(0,3,\"til\") = " << s2.replace(2, 3, "til") << endl;
    cout << "s2.insert(0,\"Madhavrao \") = " << s2.insert(0, "Madhavrao ") << endl;
    cout << "(s1==s2) = " << (s1 == s2) << endl;

    return 0;
}
