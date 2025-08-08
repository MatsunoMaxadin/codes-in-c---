#include <iostream>

using namespace std;

void getNumbers(int len, int *ptr);

int main(){

int length;

cout << "Insira quantos numeros vao para o array: ";
cin >> length;

int numbers[length];

getNumbers(length, numbers);

return 0;
}

void getNumbers(int len, int *ptr) {

int aux, min, max;

for (aux = 0; aux < len; aux++){

cout << "Insira o " << aux+1 << " valor: ";
cin >> *ptr;

if (aux == 0) {

min = *ptr;
max = *ptr;

} else if (*ptr > max) {
max = *ptr;
} else if (*ptr < min) {

min = *ptr;

}

ptr++;


};

cout << "o maior valor e: " << max << endl;
cout << "o menor valor e: " << min << endl;

}