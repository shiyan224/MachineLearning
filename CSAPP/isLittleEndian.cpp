#include<iostream>
using namespace std;
union EndianTest 
{
    uint32_t value;
    uint8_t bytes[4];
};

bool isLittleEndian()
{
    EndianTest test;
    test.value = 0x01020304;
    return (test.bytes[0] == 0x04);
}
int main()
{
    cout << isLittleEndian() << '\n';
}