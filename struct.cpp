#include<bits/stdc++.h>
using namespace std;

struct Human{

    // Kh�ng th? truy c?p t? b�n ngo�i
    string address;

    public:
        // C� th? truy c?p t? b�n ngo�i
        string name;
        int height;
        int age;

        Human(string _name = "", int _height = 0, int _age = 0, string _address = ""){
            name = _name;
            height = _height;
            age = _age;
            address = _address;
        }
};

int main(){
    Human Kteam = Human("Kteam", 170, 20, "Hanoi");

    cout << Kteam.height << endl;
    
    return 0;
}
