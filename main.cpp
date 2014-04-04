#include <iostream>
#include "present.h"

using namespace std;
int main() {
    uberzahl u("4759477275222530853120");
    Present p(u, 16);
    uberzahl u2("283686952306183");
    uberzahl c = p.encrypt(u2);
    cout << c << endl;
    uberzahl m = p.decrypt(c);
    cout << m << endl;
}
