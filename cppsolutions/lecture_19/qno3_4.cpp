// You are using GCC
#include <iostream>
#include <fstream>
#include <ios>
using namespace std;

class Item {
    
    public:
    int code, quantity;
    string name;
    float price;
    
    void AcceptData(int code, string name, int quantity, float price, bool apnd) {
        this->code = code;
        this->name = name;
        this->quantity = quantity;
        this->price = price;
        ofstream file;
        if(!apnd) file.open("item.txt", ios::binary);
        else file.open("item.txt", ios::trunc);
        file << code << " " << name << " " << quantity << " " << price << endl;
    };
    void displayData() {};
    
};

void Sort() {
    
};

struct itm {
  int code;
  string name;
  int quantity;
  float price;
  
};

int main() {
    int num, code, quantity;
    string name;
    float price;
    
    
    
    cin >> num;
    
    Item items[num];
    
    for(int i = 0; i < num; i++) {
        cin >> code >> name >> quantity >> price;
        items[i].AcceptData(code, name, quantity, price, true);
    }
    
    
    itm temp;
    
    for(int i = 0; i < num - 1; i++) {
        for(int j = i + 1; j < num; j++) {
            if(items[i].price < items[j].price) {
                temp.code = items[i].code;
                temp.name = items[i].name;
                temp.quantity = items[i].quantity;
                temp.price = items[i].price;
                
                items[i].code = items[j].code;
                items[i].name = items[j].name;
                items[i].quantity = items[j].quantity;
                items[i].price = items[j].price;
                
                items[j].code = temp.code;
                items[j].name = temp.name;
                items[j].quantity = temp.quantity;
                items[j].price = temp.price;
            }
        }
    }
    
    for(int i = 0; i < num; i++) {
        cout << items[i].code << " " << items[i].name << " " << items[i].quantity << " " << items[i].price << endl;
    }
    
    return 0;
}