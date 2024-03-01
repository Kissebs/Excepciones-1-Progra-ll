#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int x;

	try {//codigo intento

		cout << "Digite un numero entero" << endl;
		
		if (cin >> x) {
			cout << "Si es un numero entero" << endl;

		}
		else
			throw new string("Esto no es un entero");//salta

	}
	catch (string* cad1) {
		cout << *cad1 << endl;
		system("pause");
	}
	cout << "Salida " << endl;

	system("pause") ;

	return 0;
}
