#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t, t500, t200, t100, t50, t20, t10, t5, t2, t1;

    cout << "Nhap so tien ma ban muon doi: ";
    cin >> t;

    t500 = t / 500000;
    t = t - 500000 * t500;
    t200 = t / 200000;
    t = t - 200000 * t200;
    t100 = t / 100000;
    t = t - 100000 * t100;
    t50 = t / 50000;
    t = t - 50000 * t50;
    t20 = t / 20000;
    t = t - 20000 * t20;
    t10 = t / 10000;
    t = t - 10000 * t10;
    t5 = t / 5000;
    t = t - 5000 * t5;
    t2 = t / 2000;
    t = t - 2000 * t2;
    t1 = t / 1000;
    t = t - 1000 * t1;

    cout << ("So to cac loai menh gia ma ban se nhan:") << endl;
    cout << "Menh gia 500.000VND: " << t500 << endl;
    cout << "Menh gia 200.000VND: " << t200 << endl;
    cout << "Menh gia 100.000VND: " << t100 << endl;
    cout << "Menh gia 50.000VND: " << t50 << endl;
    cout << "Menh gia 20.000VND: " << t20 << endl;
    cout << "Menh gia 10.000VND: " << t10 << endl;
    cout << "Menh gia 5.000VND: " << t5 << endl;
    cout << "Menh gia 2.000VND: " << t2 << endl;
    cout << "Menh gia 1.000VND: " << t1 << endl;
    cout << "Tong so to tien ban se nhan: " << t1 + t2 + t5 + t10 + t20 + t50 + t100 + t200 + t500;
}