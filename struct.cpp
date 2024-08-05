#include<bits/stdc++.h>
using namespace std;

struct Human{

    // Không th? truy c?p t? bên ngoài
    string address;

    public:
        // Có th? truy c?p t? bên ngoài
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
