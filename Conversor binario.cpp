
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>


using namespace std;

void BinaryForDecimal();
void DecimalForBinary();
void HexadecimalForBinary();
void BinaryForHexadecimal();
void HexadecimalForDecimal();
void DecimalForHexadecimal();
void ClearConsole();


int main() {

   int option;

   do {
	   cout << "1. Binario para Decimal" << endl;
	   cout << "2. Decimal para Binario" << endl;
	   cout << "3. Hexadecimal para Binario" << endl;
	   cout << "4. Binario para Hexadecimal" << endl;
	   cout << "5. Hexadecimal para Decimal" << endl;
	   cout << "6. Decimal para Hexadecimal" << endl;
	   cout << "7. Sair" << endl;
	   cout << "Escolha uma opcao: ";

	   cin >> option;

	   switch (option) {
		   case 1:
			BinaryForDecimal();
			break;
		   case 2:
			DecimalForBinary();
			break;
		   case 3:
			HexadecimalForBinary();
			break;
		   case 4:
			BinaryForHexadecimal();
			break;
		   case 5:
			HexadecimalForDecimal();
			break;
		   case 6:
			DecimalForHexadecimal();
			break;
		   case 7:
			cout << "Saindo..." << endl;
			break;
		   default:
			cout << "Opcao invalida!" << endl;
			break;
	   }
   } while (option < 1 || option > 7);

   return 0;	
}

void BinaryForDecimal() {
	string binary;
	int decimal = 0;
	int size;

	cout << "Digite o numero binario: ";
	cin >> binary;

	size = binary.size();

	for (int i = 0; i < size; i++) {
		if (binary[i] == '1') {
			decimal += pow(2, size - 1 - i);
		}
	}
	cout << "O numero decimal e: " << decimal << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;
	
	if (option == 1) {
		BinaryForDecimal();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
	
}

void DecimalForBinary() {
	int decimal;
	string binary = "";

	cout << "Digite o numero decimal: ";
	cin >> decimal;

	while (decimal > 0) {
		binary = to_string(decimal % 2) + binary;
		decimal /= 2;
	} 

	cout << "O numero binario é: " << binary << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;

	if (option == 1) {
		BinaryForDecimal();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
}

void HexadecimalForBinary() {
	string hexadecimal;
	string binary = "";
	int size;

	cout << "Digite o numero hexadecimal: ";
	cin >> hexadecimal;

	size = hexadecimal.size();

	for (int i = 0; i < size; i++) {
		switch (hexadecimal[i]) {
			case '0':
				binary += "0000";
				break;
			case '1':
				binary += "0001";
				break;
			case '2':
				binary += "0010";
				break;
			case '3':
				binary += "0011";
				break;
			case '4':
				binary += "0100";
				break;
			case '5':
				binary += "0101";
				break;
			case '6':
				binary += "0110";
				break;
			case '7':
				binary += "0111";
				break;
			case '8':
				binary += "1000";
				break;
			case '9':
				binary += "1001";
				break;
			case 'A':
			case 'a':
				binary += "1010";
				break;
			case 'B':
			case 'b':
				binary += "1011";
				break;
			case 'C':
			case 'c':
				binary += "1100";
				break;
			case 'D':
			case 'd':
				binary += "1101";
				break;
			case 'E':
			case 'e':
				binary += "1110";
				break;
			case 'F':
			case 'f':
				binary += "1111";
				break;
			default:
				cout << "Numero hexadecimal invalido!" << endl;
				return;
		}
	}

	cout << "O numero binario é: " << binary << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;

	if (option == 1) {
		HexadecimalForBinary();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
}

void BinaryForHexadecimal() {
	string binary;
	string hexadecimal = "";
	int size;
	int decimal = 0;

	cout << "Digite o numero binario: ";
	cin >> binary;

	size = binary.size();

	for (int i = 0; i < size; i++) {
		if (binary[i] == '1') {
			decimal += pow(2, size - 1 - i);
		}
	}

	while (decimal > 0) {
		switch (decimal % 16) {
			case 0:
				hexadecimal = "0" + hexadecimal;
				break;
			case 1:
				hexadecimal = "1" + hexadecimal;
				break;
			case 2:
				hexadecimal = "2" + hexadecimal;
				break;
			case 3:
				hexadecimal = "3" + hexadecimal;
				break;
			case 4:
				hexadecimal = "4" + hexadecimal;
				break;
			case 5:
				hexadecimal = "5" + hexadecimal;
				break;
			case 6:
				hexadecimal = "6" + hexadecimal;
				break;
			case 7:
				hexadecimal = "7" + hexadecimal;
				break;
			case 8:
				hexadecimal = "8" + hexadecimal;
				break;
			case 9:
				hexadecimal = "9" + hexadecimal;
				break;
			case 10:
				hexadecimal = "A" + hexadecimal;
				break;
			case 11:
				hexadecimal = "B" + hexadecimal;
				break;
			case 12:
				hexadecimal = "C" + hexadecimal;
				break;
			case 13:
				hexadecimal = "D" + hexadecimal;
				break;
			case 14:
				hexadecimal = "E" + hexadecimal;
				break;
			case 15:
				hexadecimal = "F" + hexadecimal;
				break;
		}

		decimal /= 16;
	}

	cout << "O numero hexadecimal e: " << hexadecimal << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;

	if (option == 1) {
		BinaryForHexadecimal();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
}

void HexadecimalForDecimal() {
	string hexadecimal;
	int decimal = 0;
	int size;

	cout << "Digite o numero hexadecimal: ";
	cin >> hexadecimal;

	size = hexadecimal.size();

	for (int i = 0; i < size; i++) {
		switch (hexadecimal[i]) {
		case '0':
			decimal += 0 * pow(16, size - 1 - i);
			break;
		case '1':
			decimal += 1 * pow(16, size - 1 - i);
			break;
		case '2':
			decimal += 2 * pow(16, size - 1 - i);
			break;
		case '3':
			decimal += 3 * pow(16, size - 1 - i);
			break;
		case '4':
			decimal += 4 * pow(16, size - 1 - i);
			break;
		case '5':
			decimal += 5 * pow(16, size - 1 - i);
			break;
		case '6':
			decimal += 6 * pow(16, size - 1 - i);
			break;
		case '7':
			decimal += 7 * pow(16, size - 1 - i);
			break;
		case '8':
			decimal += 8 * pow(16, size - 1 - i);
			break;
		case '9':
			decimal += 9 * pow(16, size - 1 - i);
			break;
		case 'A':
		case 'a':
			decimal += 10 * pow(16, size - 1 - i);
			break;
		case 'B':
		case 'b':
			decimal += 11 * pow(16, size - 1 - i);
			break;
		case 'C':
		case 'c':
			decimal += 12 * pow(16, size - 1 - i);
			break;
		case 'D':
		case 'd':
			decimal += 13 * pow(16, size - 1 - i);
			break;
		case 'E':
		case 'e':
			decimal += 14 * pow(16, size - 1 - i);
			break;
		case 'F':
		case 'f':
			decimal += 15 * pow(16, size - 1 - i);
			break;
		default:
			cout << "Numero hexadecimal invalido!" << endl;
			return;
		}
	}

	cout << "O numero decimal e: " << decimal << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;

	if (option == 1) {
		HexadecimalForDecimal();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
}

void DecimalForHexadecimal() {
	int decimal;
	string hexadecimal = "";

	cout << "Digite o numero decimal: ";
	cin >> decimal;

	while (decimal > 0) {
		switch (decimal % 16) {
			case 0:
				hexadecimal = "0" + hexadecimal;
				break;
			case 1:
				hexadecimal = "1" + hexadecimal;
				break;
			case 2:
				hexadecimal = "2" + hexadecimal;
				break;
			case 3:
				hexadecimal = "3" + hexadecimal;
				break;
			case 4:
				hexadecimal = "4" + hexadecimal;
				break;
			case 5:
				hexadecimal = "5" + hexadecimal;
				break;
			case 6:
				hexadecimal = "6" + hexadecimal;
				break;
			case 7:
				hexadecimal = "7" + hexadecimal;
				break;
			case 8:
				hexadecimal = "8" + hexadecimal;
				break;
			case 9:
				hexadecimal = "9" + hexadecimal;
				break;
			case 10:
				hexadecimal = "A" + hexadecimal;
				break;
			case 11:
				hexadecimal = "B" + hexadecimal;
				break;
			case 12:
				hexadecimal = "C" + hexadecimal;
				break;
			case 13:
				hexadecimal = "D" + hexadecimal;
				break;
			case 14:
				hexadecimal = "E" + hexadecimal;
				break;
			case 15:
				hexadecimal = "F" + hexadecimal;
				break;
		}

		decimal /= 16;
	}

	cout << "O numero hexadecimal e: " << hexadecimal << endl;

	cout << "1. Fazer outra conversao" << endl;
	cout << "2. voltar ao menu de opcao de conversao" << endl;
	cout << "3. Sair" << endl;

	int option;

	cin >> option;

	if (option == 1) {
		DecimalForHexadecimal();
	}
	else if (option == 2) {
		ClearConsole();
		main();
	}
	else {
		cout << "Saindo..." << endl;
	}
}

void ClearConsole() {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}