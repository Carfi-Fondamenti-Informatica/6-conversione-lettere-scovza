#include <iostream>
#include "lib.h"

using namespace std;

int main() {

    char a;

    cin >> a;

    if (confronto (a) == true) {

        int num = (int) a;

        if (num >= 65 && num <=90){

            char end = (char) num+32;

            cout << end;

        }else if(num >= 97 && num <=122){

            char end = (char) num-32;

            cout << end;
        }

    }else {

        cout << "errore" << endl;
    }
    
    return 0;
}
