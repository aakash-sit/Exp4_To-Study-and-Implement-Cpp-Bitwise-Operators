#include <iostream>
using namespace std;

int main() {
    int num = 10; 
    int pos = 1;   
    int setBit = num | (1 << pos);       
    int resetBit = num & ~(1 << pos);     

    cout << "Original number = " << num << endl;
    cout << "After setting bit at pos " << pos << " = " << setBit << endl;
    cout << "After resetting bit at pos " << pos << " = " << resetBit << endl;

    return 0;
}