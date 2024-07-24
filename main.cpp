#include <iostream>

using namespace std;
//introduction to pointers ...

void printNumber(int*numberPtr) {

cout<<*numberPtr<<endl;

}

void printletter(char*charPtr) {

    cout<<charPtr<<endl;

}

void print(void*ptr,char type) {

    switch (type) {

        case 'i':cout<<*((int*)ptr)<<endl;break;
        case 'c':cout<<*((char*)ptr)<<endl;break;
    }
}

int main() {

int number=5;
    char letter='a';
    //printNumber(&number);
    //printletter(&letter);

print(&number,'i');
    print(&letter,'c');

    return 0;
}

