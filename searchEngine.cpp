
#include <iostream>
using namespace std;

int searchEngine (int *ptrArr, int MAX) {
    int i;
    int j = -1;
    int x;
    
    cout << "Insira o número a ser buscado: " << endl;
    cin >> x;
    
    
    for(i = 0; i < MAX; i++){
        if (*ptrArr == x)
        return i;
        
        ptrArr++;
    };
    
    return j;
    
    
};

void initialArr (int *ptrArr, int MAX){
    
    int i;
    
    for (i = 0; i < MAX; i++){
        cout << "Insira o " << i+1 << " numero: " << endl;
        cin >> *ptrArr;
        ptrArr++;
    };
    
};

int main() {
    int MAX;
    
    cout << "Insira o tamanho do array " << endl;
    cin >> MAX;
    
    int arr[MAX];
    
    initialArr(arr, MAX);
    
    cout << "O índice do número buscado é: "<< searchEngine(arr, MAX);
    
} 
