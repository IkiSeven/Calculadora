#include <iostream>
#include "../Headers/Include/op.h"

using namespace std;

int main(){

op operation;
float numberOne;
float numberTwo;
float numberResultShow;
int chooseID;

cout << "Digite um valor: " << endl;
cin >> numberOne;
operation.setNumberOne(numberOne);

cout << "Qual operacao voce deseja realizar?" << endl;
cout << "1 - soma" << endl;
cout << "2 - subtrcao" << endl;
cout << "3 - multiplicacao" << endl;
cout << "4 - divisao" << endl;
cout << "------------------------" << endl;
cin >> chooseID;

cout << "Digite outro valor: " << endl;
cin >> numberTwo;
operation.setNumberTwo(numberTwo);

switch(chooseID){
    case 1:
        numberResultShow = operation.getNumberOne() + operation.getNumberTwo();
        break;
    case 2:
        numberResultShow = operation.getNumberOne() - operation.getNumberTwo();
        break;
    case 3:
        numberResultShow = operation.getNumberOne() * operation.getNumberTwo();
        break;
    case 4:
        numberResultShow = operation.getNumberOne() / operation.getNumberTwo();
        break;
}

cout << "Resultado: " << numberResultShow << endl;

return 0;
}