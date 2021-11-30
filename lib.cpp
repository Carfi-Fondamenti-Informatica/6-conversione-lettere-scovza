using namespace std;

bool confronto (char a){

    int num = (int) a;

    if (num >= 65 && num <=90){

        return true;
    }else if (num >= 97 && num <= 122){

        return true;
    }else {

        return false;
    }

}
