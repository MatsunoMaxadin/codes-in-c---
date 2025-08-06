#include <iostream>

using namespace std;

const int NumStudents = 5, NumNotes = 3;

int cont, dont;

float notes[NumStudents][NumNotes] = {};

float medias [NumStudents] = {};

void putNotes(float notes[NumStudents][NumNotes]) {

for (cont = 0; cont < NumStudents; cont++)

{  for(dont = 0; dont < NumNotes; dont++)

{

cout << "Insira a nota " << dont+1 << " do aluno " << cont+1 << endl;

cin >> notes[cont][dont];

medias[cont] += notes[cont][dont]/NumNotes;



} }

}

int main() {

putNotes(notes);

for (cont = 0; cont < NumStudents; cont++) {
 
cout << "media do estudante "  << cont + 1 << ": " << medias[cont] << endl;

}

return 0;

}