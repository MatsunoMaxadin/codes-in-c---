#include <iostream>

using namespace std;


int main(){

    
    cout << "Hello World!" << endl;

    float nota1, nota2, nota3;
    float peso1, peso2, peso3;

    cin >> nota1;
    cin >> peso1;
    cin >> nota2;
    cin >> peso2;
    cin >> nota3;
    cin >> peso3;

    float media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    cout << "A média final é: " << media << endl;



    

    return 0;
}