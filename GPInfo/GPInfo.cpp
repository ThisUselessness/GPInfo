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
			Region = "Алтайский край";
		}
		else if (OCATO == 3) {
			Region = "Краснодарский край";

		}
		else if (OCATO == 4) {
			Region = "Красноярский край";

		}
		else if (OCATO == 5) {
			Region = "Приморский край";

		}
		else if (OCATO == 7) {
			Region = "Ставропольский край";

		}
		else if (OCATO == 8) {
			Region = "Хабаровский край";

		}
		else if (OCATO == 10) {
			Region = "Амурская область";

		}
		else if (OCATO == 11) {
			Region = "Архангельская область";

		}
		else if (OCATO == 12) {
			Region = "Астраханская область";

		}
		else if (OCATO == 14) {
			Region = "Белгородская область";

		}
		else if (OCATO == 15) {
			Region = "Брянская область";

		}
		else if (OCATO == 17) {
			Region = "Владимирская область";

		}
		else if (OCATO == 18) {
			Region = "Волгоградская область";

		}
		else if (OCATO == 19) {
			Region = "Вологодская область";

		}
		else if (OCATO == 20) {
			Region = "Воронежская область";

		}
		else if (OCATO == 22) {
			Region = "Нижегородская область";

		}
		else if (OCATO == 24) {
			Region = "Ивановская область";

		}
		else if (OCATO == 25) {
			Region = "Иркутская область";

		}
		else if (OCATO == 26) {
			Region = "Республика Ингушетия";

		}
		else if (OCATO == 27) {
			Region = "Калининградская область";

		}
		else if (OCATO == 28) {
			Region = "Тверская область";

		}
		else if (OCATO == 29) {
			Region = "Калужская область";

		}
		else if (OCATO == 30) {
			Region = "Камчатская область";

		}
		else if (OCATO == 32) {
			Region = "Кемеровская область";

		}
		else if (OCATO == 33) {
			Region = "Кировская область";

		}
		else if (OCATO == 34) {
			Region = "Костромская область";

		}
		else if (OCATO == 36) {
			Region = "Самарская область";

		}
		else if (OCATO == 37) {
			Region = "Курганская область";

		}
		else if (OCATO == 38) {
			Region = "Курская область";

		}
		else if (OCATO == 39) {
			Region = "Город Санкт-Петербург";

		}
		else if (OCATO == 40) {
			Region = "Город Санкт-Петербур и Лен Область";

		}
		else if (OCATO == 41) {
			Region = "Ленинградская область";

		}
		else if (OCATO == 42) {
			Region = "Липецкая область";

		}
		else if (OCATO == 44) {
			Region = "Магаданская область";

		}
		else if (OCATO == 45) {
			Region = "Город Москва";

		}
		else if (OCATO == 46) {
			Region = "Московская область";

		}
		else if (OCATO == 47) {
			Region = "Мурманская область";

		}
		else if (OCATO == 48) {
			Region = "";

		}
		else if (OCATO == 49) {
			Region = "Новгородская область";

		}
		else if (OCATO == 50) {
			Region = "Новосибирская область";
		}
		else if (OCATO == 52) {
			Region = "Омская область";

		}
		else if (OCATO == 53) {
			Region = "Оренбургская область";

		}
		else if (OCATO == 54) {
			Region = "Орловская область";

		}
		else if (OCATO == 56) {
			Region = "Пензенская область";

		}
		else if (OCATO == 57) {
			Region = "Пермский край";

		}
		else if (OCATO == 58) {
			Region = "Псковская область";

		}
		else if (OCATO == 60) {
			Region = "Ростовская область";

		}
		else if (OCATO == 61) {
			Region = "Рязанская область";

		}
		else if (OCATO == 63) {
			Region = "Саратовская область";

		}
		else if (OCATO == 64) {
			Region = "Сахалинская область";

		}
		else if (OCATO == 65) {
			Region = "Свердловская область";

		}
		else if (OCATO == 66) {
			Region = "Смоленская область";

		}
		else if (OCATO == 68) {
			Region = "Тамбовская область";

		}
		else if (OCATO == 69) {
			Region = "Томская область";

		}
		else if (OCATO == 70) {
			Region = "Тульская область";

		}
		else if (OCATO == 71) {
			Region = "Тюменская область";

		}
		else if (OCATO == 73) {
			Region = "Ульяновская область";

		}
		else if (OCATO == 75) {
			Region = "Челябинская область";

		}
		else if (OCATO == 76) {
			Region = "Забайкальский край";

		}
		else if (OCATO == 77) {
			Region = "Чукотский автономный округ";

		}
		else if (OCATO == 78) {
			Region = "Ярославская область";

		}
		else if (OCATO == 79) {
			Region = "Республика Адыгея (Адыгея)";

		}
		else if (OCATO == 80) {
			Region = "Республика Башкортостан";

		}
		else if (OCATO == 81) {
			Region = "Республика Бурятия";

		}
		else if (OCATO == 82) {
			Region = "Республика Дагестан";

		}
		else if (OCATO == 83) {
			Region = "Кабардино-Балкарская Р-ка";

		}
		else if (OCATO == 84) {
			Region = "Республика Алтай";

		}
		else if (OCATO == 85) {
			Region = "Республика Калмыкия";

		}
		else if (OCATO == 86) {
			Region = "Республика Карелия";

		}
		else if (OCATO == 87) {
			Region = "Республика Коми";

		}
		else if (OCATO == 88) {
			Region = "Республика Марий Эл";

		}
		else if (OCATO == 89) {
			Region = "Республика Мордовия";

		}
		else if (OCATO == 90) {
			Region = "Р-ка Северная Осетия-Алания";

		}
		else if (OCATO == 91) {
			Region = "Карачаево-Черкесская Р-ка";

		}
		else if (OCATO == 92) {
			Region = "Республика Татарстан";

		}
		else if (OCATO == 93) {
			Region = "Республика Тыва";

		}
		else if (OCATO == 94) {
			Region = "Удмуртская Республика";

		}
		else if (OCATO == 95) {
			Region = "Республика Хакасия";

		}
		else if (OCATO == 96) {
			Region = "Чеченская Республика";

		}
		else if (OCATO == 97) {
			Region = "Чувашская Республика";

		}
		else if (OCATO == 98) {
			Region = "Республика Саха (Якутия)";

		}
		else if (OCATO == 99) {
			Region = "Еврейская автономная область";

		}
		if (Code == 0) {
			PCode = "управлением ФМС";
		}
		else if (Code == 1) {
			PCode = "ПВС при МВД, УВД или ГУВД";
		}
		else if (Code == 2) {
			PCode = "ОВД района или города";
		}
		else if (Code == 3) {
			PCode = "отделением полиции";
		}
	}
}

void SelectFuncs() {
	logo();
	int Select;
	cout << "Выберите:\n1. Получить информацию о паспорте\n2. Информация о программе\n";
	cin >> Select;
	switch (Select) {
	case 1:
		system("cls");
		logo();

		cout << "Введите 10-ти значный код сбоку паспорта, пример [XX XX XXXXXX]:\n(! Заместо пробелов нажимайте ENTER !)\n";
		cin >> OCATO >> Year >> NumberPassport;
		cout << "Введите первые три цифры в коде подразделений\n(! Через каждую одну цифру нажимайте ENTER !)\n";
		cin >> None1 >> None2 >> Code;
		system("cls");
		logo();
		cout << "Сбор информации..\n"; Sleep(400);
		cout << "Информация о паспорте:\n"; Sleep(400);
		system("cls");
		logo();
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << "Регион выдачи: "<< Region <<"\n";
		cout << "Выдан: " << PCode << " | Год выдачи (сокращёно): " << Year << " | Номер паспорта: " << NumberPassport << "\n";
		cout << "-----------------------------------------------------------------------------------------------\n";
		break;
	case 2:
		MessageBox(NULL, L"Создал програму: ThisUselessness\nДата: 2022\nИнформация о програме:\nЭта программа получает информацию о паспорте, туториал по использованию в теме", L"GPInfo", MB_OK);
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
