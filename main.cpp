#include <iostream>
#include "present.h"

using namespace std;
int main() {
    uberzahl u("1234567890123456");
    Present p(u, 16);
    uberzahl u2("1234567812345678");
    uberzahl c = p.encrypt(u2);
    cout << c << endl;
    uberzahl m = p.decrypt(c);
    cout << m << endl;
}
