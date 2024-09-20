#include<iostream>
using namespace std;

class Fruit {
protected:
    int apple = 10;
    int mango = 20;

public:
    int totalFruits() {
        return apple + mango;
    }
};

class Apples : public Fruit {
public:
    void displayApples() {
        cout << "Total Apples are: " << apple << endl;
    }
};

class Mangoes : public Apples {
public:
    void displayMangoes() {
        cout << "Total Mangoes are: " << mango << endl;
    }
};

int main() {
    Mangoes m;
    
 
    m.displayApples();
    m.displayMangoes();
    cout << "Total fruits are: " << m.totalFruits() << endl;

    return 0;
}
