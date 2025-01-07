#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // absolute value
    int r = abs(-2);
    cout << r << endl;

    // square root
    double s = sqrt(25);
    cout << s << endl;

    // power
    double p = pow(5, 2);
    cout << p << endl;

    // log function
    double x = 10.5;
    double l = log(x);
    cout << l << endl;

    // log 10 function
    double y = 10.5;
    double a = log10(y);
    cout << a << endl;

    // exponential function
    double a1 = 1;
    double a2 = exp(a1);
    cout << a2 << endl;

    // round function->
    // দশমিক এর পর ৫ বা ৫ এর বেশি থাকলে পূর্ণ সংখ্যার সাথে ১ যোগ করবে...

    double b1 = 5.5;
    double b2 = round(b1);
    cout << b2 << endl;

    // truncate function->
    // দশমিক এর পরের অংশ দেখায় না।

    double c1 = 0.58754;
    double c2 = trunc(c1);
    cout << c2 <<endl;

    // ceilling function->
    // দশমিক সংখ্যা নিলে তার পরবর্তী পূর্ণ সংখ্যা দেখাবে...

    double d1 = 1.0005;
    double d2 = ceil(d1);
    cout << d2 << endl;

    // floor function->
    // দশমিক সংখ্যা নিলে তার পূর্ববর্তী পূর্ণ সংখ্যা দেখাবে...

    double e1 = 1.0005;
    double e2 = floor(d1);
    cout << e2 << endl;

    return 0;
}