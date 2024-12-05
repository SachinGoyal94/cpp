#include <iostream>
#include <cmath>
#include <cstring>
#include <climits>
using namespace std;
 
class Rational {
private:
    int num, den;
 
public:
    Rational(int n = 0, int d = 1) {
        num = n;
        den = d;
    }
 
    friend Rational operator+(Rational c1, Rational c2);
    friend ostream &operator<<(ostream &o,Rational &temp);
};
 
Rational operator+(Rational c1, Rational c2) {
    Rational temp;
    temp.num = c1.num * c2.den + c2.num * c1.den;
    temp.den = c1.den * c2.den;
    return temp;
}
 
ostream &operator<<(ostream &o,Rational &temp) {
    o << temp.num << "/" << temp.den;
    return o;
}
 
int main() {
    Rational c1(4, 5), c2(8, 9);
    Rational c3 = c1 + c2;
    cout << c3 << endl;
 
    return 0;
}
