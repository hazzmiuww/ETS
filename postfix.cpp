#include <iostream>
#include <stack>
#include <cmath>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string, double> var;

    cout << "Masukkan nilai a: ";
    cin >> var["a"];
    cout << "Masukkan nilai b: ";
    cin >> var["b"];
    cout << "Masukkan nilai f: ";
    cin >> var["f"];
    cout << "Masukkan nilai g: ";
    cin >> var["g"];
    cout << "Masukkan nilai d: ";
    cin >> var["d"];
    cout << "Masukkan nilai h: ";
    cin >> var["h"];
    vector<string> postfix = {"a", "2", "b", "3", "^", "*", "f", "g", "-", "/", "+", "d", "h", "*", "+"};
    stack<double> s;

    for (string token : postfix)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/" || token == "^")
        {
            double val2 = s.top();
            s.pop();
            double val1 = s.top();
            s.pop();
            double res = 0;

            if (token == "+")
                res = val1 + val2;
            else if (token == "-")
                res = val1 - val2;
            else if (token == "*")
                res = val1 * val2;
            else if (token == "/")
                res = val1 / val2;
            else if (token == "^")
                res = pow(val1, val2);

            s.push(res);
        }

        else
        {
            double val = (token == "2" || token == "3") ? stod(token) : var[token];
            s.push(val);
        }
    }

    cout << "Hasil akhir di Top Stack: " << s.top() << endl;
    return 0;
}