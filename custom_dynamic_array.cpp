#include <iostream>

using namespace std;

class DaftarDinamis {
private:
int* data;
int ukuran;
int kapasitas;

public:
DaftarDinamis() {
    kapasitas = 2;
    ukuran = 0;
    data = new int [kapasitas];
}
};

int main() {

    return 0;
}