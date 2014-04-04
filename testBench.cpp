#include <iostream>
#include <vector>
#include "present.h"
#include "475Project.h"

using namespace std;

int main() {
    uberzahl key;
    uberzahl key2("1208925819614629174706175"); // 0xFFFFFFFFFFFFFFFFFFFF
    uberzahl plaintext;
    uberzahl plaintext2("1208925819614629174706175"); // 0xFFFFFFFFFFFFFFFFFFFF

    Present p(key, 10);
    uberzahl c = p.encrypt(plaintext);
    cout << "PlainText: 0; Key: 0; CipherText: " << c << endl;

    Present p2(key2, 10);
    c = p2.encrypt(plaintext);
    cout << "PlainText: 0; Key: FFFFFFFFFFFFFFFFFFFF; CipherText: " << c << endl;

    Present p3(key, 10);
    c = p3.encrypt(plaintext2);
    cout << "PlainText: FFFFFFFFFFFFFFFFFFFF; Key: 0; CipherText: " << c << endl;

    Present p4(key2, 10);
    c = p4.encrypt(plaintext2);
    cout << "PlainText: FFFFFFFFFFFFFFFFFFFF; Key: FFFFFFFFFFFFFFFFFFFF; CipherText: " << c << endl;

    vector <uberzahl> keys, plaintexts, cyphers;
    keys.push_back(key);
    keys.push_back(key2);
    keys.push_back(key);
    keys.push_back(key2);
    plaintexts.push_back(plaintext);
    plaintexts.push_back(plaintext);
    plaintexts.push_back(plaintext2);
    plaintexts.push_back(plaintext2);
    cyphers = encrypt(keys, plaintexts);
    cout << "cyphers: " << " " << cyphers[0] << " " << cyphers[1] << " " << cyphers[2] << " " << cyphers[3] << endl;

}
