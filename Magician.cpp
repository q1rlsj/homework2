#include "Magician.h"
#include "monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) :Player(nickname) {
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    MP = 80;
}
void Magician::attack() {
    cout << "���� ���" << endl;
}