#include <iostream>
#include <string>
#include <typeinfo>
#include <limits>
int main()
{
    char a = 12;
    std::cout << "a = " << a << std::endl;
    std::cout << "type a = " << typeid(a).name() << std::endl;
    std::cout << "size a = " << sizeof(a) << std::endl;
    std::cout << "char min = " << (int)std::numeric_limits<char>::min() << std::endl;
    std::cout << "char max = " << (int)std::numeric_limits<char>::max() << std::endl;

    unsigned char b = 234;
    std::cout << "b = " << (int)b << std::endl;
    std::cout << "type b = " << typeid(b).name() << std::endl;
    std::cout << "size b = " << sizeof(b) << std::endl;
    std::cout << "unsigned char min = " << (int)std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << "unsigned char max = " << (int)std::numeric_limits<unsigned char>::max() << std::endl;

    short c = 5;
    std::cout << "c = " << c << std::endl;
    std::cout << "type c = " << typeid(c).name() << std::endl;
    std::cout << "size c = " << sizeof(c) << std::endl;
    std::cout << "short min = " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "short max = " << std::numeric_limits<short>::max() << std::endl;

    unsigned short d = 5;
    std::cout << "d = " << d << std::endl;
    std::cout << "type d = " << typeid(d).name() << std::endl;
    std::cout << "size d = " << sizeof(d) << std::endl;
    std::cout << "unsigned short min = " << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << "unsigned short max = " << std::numeric_limits<unsigned short>::max() << std::endl;

    enum w { sun, mun, tue, wed, thur, frid, sat };
    w e = tue;
    std::cout << "day = " << e << std::endl;
    std::cout << "type e = " << typeid(e).name() << std::endl;
    std::cout << "size e = " << sizeof(e) << std::endl;
    std::cout << "enum min = " << -2147483648 << std::endl;
    std::cout << "enum max = " << 2147483647 << std::endl;

    int i = 1000;
    std::cout << "i = " << i << std::endl;
    std::cout << "type i = " << typeid(i).name() << std::endl;
    std::cout << "size i = " << sizeof(i) << std::endl;
    std::cout << "int min = " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "int max = " << std::numeric_limits<int>::max() << std::endl;

    unsigned int ui = 1000;
    std::cout << "ui = " << ui << std::endl;
    std::cout << "type ui = " << typeid(ui).name() << std::endl;
    std::cout << "size ui = " << sizeof(ui) << std::endl;
    std::cout << "unsigned int min = " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "unsigned int max = " << std::numeric_limits<unsigned int>::max() << std::endl;

    long l = 100000;
    std::cout << "l = " << l << std::endl;
    std::cout << "type l = " << typeid(l).name() << std::endl;
    std::cout << "size l = " << sizeof(l) << std::endl;
    std::cout << "long min = " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "long max = " << std::numeric_limits<long>::max() << std::endl;

    unsigned long ul = 100000;
    std::cout << "ul = " << ul << std::endl;
    std::cout << "type ul = " << typeid(ul).name() << std::endl;
    std::cout << "size ul = " << sizeof(ul) << std::endl;
    std::cout << "unsigned long min = " << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << "unsigned long max = " << std::numeric_limits<unsigned long>::max() << std::endl;

    long long ll = 100000;
    std::cout << "ll = " << ll << std::endl;
    std::cout << "type ll = " << typeid(ll).name() << std::endl;
    std::cout << "size ll = " << sizeof(ll) << std::endl;
    std::cout << "long long min = " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "long long max = " << std::numeric_limits<long long>::max() << std::endl;

    unsigned long long ull = 100000;
    std::cout << "ull = " << ull << std::endl;
    std::cout << "type ull = " << typeid(ull).name() << std::endl;
    std::cout << "size ull = " << sizeof(ull) << std::endl;
    std::cout << "unsigned long long min = " << std::numeric_limits<unsigned long long>::min() << std::endl;
    std::cout << "unsigned long long max = " << std::numeric_limits<unsigned long long>::max() << std::endl;

    float f = 3.14;
    std::cout << "f = " << f << std::endl;
    std::cout << "type f = " << typeid(f).name() << std::endl;
    std::cout << "size f = " << sizeof(f) << std::endl;
    std::cout << "float min = " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "float max = " << std::numeric_limits<float>::max() << std::endl;

    double d2 = 3.14159;
    std::cout << "d2 = " << d2 << std::endl;
    std::cout << "type d2 = " << typeid(d2).name() << std::endl;
    std::cout << "size d2 = " << sizeof(d2) << std::endl;
    std::cout << "double min = " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "double max = " << std::numeric_limits<double>::max() << std::endl;

    long double ld = 3.14159L;
    std::cout << "ld = " << ld << std::endl;
    std::cout << "type ld = " << typeid(ld).name() << std::endl;
    std::cout << "size ld = " << sizeof(ld) << std::endl;
    std::cout << "long double min = " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "long double max = " << std::numeric_limits<long double>::max() << std::endl;

    bool bl = true;
    std::cout << "bl = " << bl << std::endl;
    std::cout << "type bl = " << typeid(bl).name() << std::endl;
    std::cout << "size bl = " << sizeof(bl) << std::endl;
    std::cout << "bool min = " << std::numeric_limits<bool>::min() << std::endl;
    std::cout << "bool max = " << std::numeric_limits<bool>::max() << std::endl;

    std::cout << "i/a=" << i/a << std::endl;
    std::cout << "i/ui=" << i/ui << std::endl;
    std::cout << "i*d2=" << i*d2 << std::endl;

    return 0;
}