/* Código feito para calcular o perímetro e a área de uma circunferência e o volume de uma esfera com base no raio.*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira o raio da cincurferencia: ";
    float raio;
    cin >> raio;

    double pi = 3.14;

    double perimetro = 2 * pi * raio;
    double area = pi * raio * raio;
    double volume = (4*pi*raio*raio*raio)/3;

    cout << "Operimetro da cincurferencia e: " << perimetro << endl;
    cout << "A área da cincurferencia e: " << area << endl;
    cout << "O volume da esfera e: " << volume << endl;

    return 0;





}