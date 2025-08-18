#include <iostream>
using namespace std;

const int MAX = 5;

int searchEngine (int arr[MAX], int x) {
    int i;
    int j = -1;
    
    for(i = 0; i < MAX; i++){
        if (arr[i] == x)
        return i;
    };
    
    return j;
    
    
};

void initialSearch(int arr[MAX]){
    int x;
    
    while(x != -2){
    
    cout << "Escolha o valor a ser encontrado" << endl;
    cin >> x;
    cout << "Este número possui o index de: " << searchEngine(arr, x) << endl;
    }
    
};

void initialArr (int arr[MAX]){
    int i;
    
    for (i = 0; i < MAX; i++){
        cout << "Insira o " << i+1 << " numero: " << endl;
        cin >> arr[i];
    };
    
};

int main() {
    int arr[MAX];
    
    initialArr(arr);
    
    initialSearch(arr);
    
}
