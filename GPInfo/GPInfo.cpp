#include <Windows.h>
#include <iostream>
#include <thread>
using namespace std;

std::string Region;
std::string PCode;

int OCATO;
int Year;
int NumberPassport;
int None1;
int None2;
int Code;

void logo() {
	cout << "	     GGGGGGGGGGGGG PPPPPPPPPPPPPPPPP  IIIIIIIIII                      ffffffffffffffff\n";
	cout << "	  GGG::::::::::::GP::::::::::::::::P  I::::::::I                     f::::::::::::::::f\n";
	cout << "   GG:::::::::::::::GP::::::PPPPPP:::::P I::::::::I                    f::::::::::::::::::f\n";
	cout << "  G:::::GGGGGGGG::::GPP:::::P     P:::::PII::::::II                    f::::::fffffff:::::f\n";
	cout << " G:::::G       GGGGGG  P::::P     P:::::P  I::::I  nnnn  nnnnnnnn      f:::::f       ffffff   ooooooooooo\n";
	cout << "G:::::G                P::::P     P:::::P  I::::I  n:::nn::::::::nn    f:::::f              oo:::::::::::oo\n";
	cout << "G:::::G                P::::PPPPPP:::::P   I::::I  n::::::::::::::nn  f:::::::ffffff       o:::::::::::::::o\n";
	cout << "G:::::G    GGGGGGGGGG  P:::::::::::::PP    I::::I  nn:::::::::::::::n f::::::::::::f       o:::::ooooo:::::o\n";
	cout << "G:::::G    G::::::::G  P::::PPPPPPPPP      I::::I    n:::::nnnn:::::n f::::::::::::f       o::::o     o::::o\n";
	cout << "G:::::G    GGGGG::::G  P::::P              I::::I    n::::n    n::::n f:::::::ffffff       o::::o     o::::o\n";
	cout << "G:::::G        G::::G  P::::P              I::::I    n::::n    n::::n  f:::::f             o::::o     o::::o\n";
	cout << " G:::::G       G::::G  P::::P              I::::I    n::::n    n::::n  f:::::f             o::::o     o::::o\n";
	cout << "  G:::::GGGGGGGG::::GPP::::::PP          II::::::II  n::::n    n::::n f:::::::f            o:::::ooooo:::::o\n";
	cout << "   GG:::::::::::::::GP::::::::P          I::::::::I  n::::n    n::::n f:::::::f            o:::::::::::::::o\n";
	cout << "	  GGG::::::GGG:::GP::::::::P          I::::::::I  n::::n    n::::n f:::::::f             oo:::::::::::oo\n";
	cout << "		 GGGGGG   GGGGPPPPPPPPPP          IIIIIIIIII  nnnnnn    nnnnnn fffffffff               ooooooooooo\n";
	cout << "\n";
}

void Regions() {
	while (true) {
		if (OCATO == 1) {
			Region = "��������� ����";
		}
		else if (OCATO == 3) {
			Region = "������������� ����";

		}
		else if (OCATO == 4) {
			Region = "������������ ����";

		}
		else if (OCATO == 5) {
			Region = "���������� ����";

		}
		else if (OCATO == 7) {
			Region = "�������������� ����";

		}
		else if (OCATO == 8) {
			Region = "����������� ����";

		}
		else if (OCATO == 10) {
			Region = "�������� �������";

		}
		else if (OCATO == 11) {
			Region = "������������� �������";

		}
		else if (OCATO == 12) {
			Region = "������������ �������";

		}
		else if (OCATO == 14) {
			Region = "������������ �������";

		}
		else if (OCATO == 15) {
			Region = "�������� �������";

		}
		else if (OCATO == 17) {
			Region = "������������ �������";

		}
		else if (OCATO == 18) {
			Region = "������������� �������";

		}
		else if (OCATO == 19) {
			Region = "����������� �������";

		}
		else if (OCATO == 20) {
			Region = "����������� �������";

		}
		else if (OCATO == 22) {
			Region = "������������� �������";

		}
		else if (OCATO == 24) {
			Region = "���������� �������";

		}
		else if (OCATO == 25) {
			Region = "��������� �������";

		}
		else if (OCATO == 26) {
			Region = "���������� ���������";

		}
		else if (OCATO == 27) {
			Region = "��������������� �������";

		}
		else if (OCATO == 28) {
			Region = "�������� �������";

		}
		else if (OCATO == 29) {
			Region = "��������� �������";

		}
		else if (OCATO == 30) {
			Region = "���������� �������";

		}
		else if (OCATO == 32) {
			Region = "����������� �������";

		}
		else if (OCATO == 33) {
			Region = "��������� �������";

		}
		else if (OCATO == 34) {
			Region = "����������� �������";

		}
		else if (OCATO == 36) {
			Region = "��������� �������";

		}
		else if (OCATO == 37) {
			Region = "���������� �������";

		}
		else if (OCATO == 38) {
			Region = "������� �������";

		}
		else if (OCATO == 39) {
			Region = "����� �����-���������";

		}
		else if (OCATO == 40) {
			Region = "����� �����-�������� � ��� �������";

		}
		else if (OCATO == 41) {
			Region = "������������� �������";

		}
		else if (OCATO == 42) {
			Region = "�������� �������";

		}
		else if (OCATO == 44) {
			Region = "����������� �������";

		}
		else if (OCATO == 45) {
			Region = "����� ������";

		}
		else if (OCATO == 46) {
			Region = "���������� �������";

		}
		else if (OCATO == 47) {
			Region = "���������� �������";

		}
		else if (OCATO == 48) {
			Region = "";

		}
		else if (OCATO == 49) {
			Region = "������������ �������";

		}
		else if (OCATO == 50) {
			Region = "������������� �������";
		}
		else if (OCATO == 52) {
			Region = "������ �������";

		}
		else if (OCATO == 53) {
			Region = "������������ �������";

		}
		else if (OCATO == 54) {
			Region = "��������� �������";

		}
		else if (OCATO == 56) {
			Region = "���������� �������";

		}
		else if (OCATO == 57) {
			Region = "�������� ����";

		}
		else if (OCATO == 58) {
			Region = "��������� �������";

		}
		else if (OCATO == 60) {
			Region = "���������� �������";

		}
		else if (OCATO == 61) {
			Region = "��������� �������";

		}
		else if (OCATO == 63) {
			Region = "����������� �������";

		}
		else if (OCATO == 64) {
			Region = "����������� �������";

		}
		else if (OCATO == 65) {
			Region = "������������ �������";

		}
		else if (OCATO == 66) {
			Region = "���������� �������";

		}
		else if (OCATO == 68) {
			Region = "���������� �������";

		}
		else if (OCATO == 69) {
			Region = "������� �������";

		}
		else if (OCATO == 70) {
			Region = "�������� �������";

		}
		else if (OCATO == 71) {
			Region = "��������� �������";

		}
		else if (OCATO == 73) {
			Region = "����������� �������";

		}
		else if (OCATO == 75) {
			Region = "����������� �������";

		}
		else if (OCATO == 76) {
			Region = "������������� ����";

		}
		else if (OCATO == 77) {
			Region = "��������� ���������� �����";

		}
		else if (OCATO == 78) {
			Region = "����������� �������";

		}
		else if (OCATO == 79) {
			Region = "���������� ������ (������)";

		}
		else if (OCATO == 80) {
			Region = "���������� ������������";

		}
		else if (OCATO == 81) {
			Region = "���������� �������";

		}
		else if (OCATO == 82) {
			Region = "���������� ��������";

		}
		else if (OCATO == 83) {
			Region = "���������-���������� �-��";

		}
		else if (OCATO == 84) {
			Region = "���������� �����";

		}
		else if (OCATO == 85) {
			Region = "���������� ��������";

		}
		else if (OCATO == 86) {
			Region = "���������� �������";

		}
		else if (OCATO == 87) {
			Region = "���������� ����";

		}
		else if (OCATO == 88) {
			Region = "���������� ����� ��";

		}
		else if (OCATO == 89) {
			Region = "���������� ��������";

		}
		else if (OCATO == 90) {
			Region = "�-�� �������� ������-������";

		}
		else if (OCATO == 91) {
			Region = "���������-���������� �-��";

		}
		else if (OCATO == 92) {
			Region = "���������� ���������";

		}
		else if (OCATO == 93) {
			Region = "���������� ����";

		}
		else if (OCATO == 94) {
			Region = "���������� ����������";

		}
		else if (OCATO == 95) {
			Region = "���������� �������";

		}
		else if (OCATO == 96) {
			Region = "��������� ����������";

		}
		else if (OCATO == 97) {
			Region = "��������� ����������";

		}
		else if (OCATO == 98) {
			Region = "���������� ���� (������)";

		}
		else if (OCATO == 99) {
			Region = "��������� ���������� �������";

		}
		if (Code == 0) {
			PCode = "����������� ���";
		}
		else if (Code == 1) {
			PCode = "��� ��� ���, ��� ��� ����";
		}
		else if (Code == 2) {
			PCode = "��� ������ ��� ������";
		}
		else if (Code == 3) {
			PCode = "���������� �������";
		}
	}
}

void SelectFuncs() {
	logo();
	int Select;
	cout << "��������:\n1. �������� ���������� � ��������\n2. ���������� � ���������\n";
	cin >> Select;
	switch (Select) {
	case 1:
		system("cls");
		logo();

		cout << "������� 10-�� ������� ��� ����� ��������, ������ [XX XX XXXXXX]:\n(! ������� �������� ��������� ENTER !)\n";
		cin >> OCATO >> Year >> NumberPassport;
		cout << "������� ������ ��� ����� � ���� �������������\n(! ����� ������ ���� ����� ��������� ENTER !)\n";
		cin >> None1 >> None2 >> Code;
		system("cls");
		logo();
		cout << "���� ����������..\n"; Sleep(400);
		cout << "���������� � ��������:\n"; Sleep(400);
		system("cls");
		logo();
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << "������ ������: "<< Region <<"\n";
		cout << "�����: " << PCode << " | ��� ������ (���������): " << Year << " | ����� ��������: " << NumberPassport << "\n";
		cout << "-----------------------------------------------------------------------------------------------\n";
		break;
	case 2:
		MessageBox(NULL, L"������ ��������: ThisUselessness\n����: 2022\n���������� � ��������:\n��� ��������� �������� ���������� � ��������, �������� �� ������������� � ����", L"GPInfo", MB_OK);
		system("cls");
		SelectFuncs();
		break;
	}
	cin.get();
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleTitle(L"GPInfo");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	std::thread(Regions).detach();
	SelectFuncs();
	while (true);
}