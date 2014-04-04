#include <iostream>
#include "present.h"

using namespace std;
int main() {
    Present p("1234567890123456");
    string c = p.encrypt("zxcvbnm,");
    cout << c << endl;
    string m = p.decrypt(c);
    cout << m << endl;
}
