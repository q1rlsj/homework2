#include "Archer.h"
#include "monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) :Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */ {
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    accuracy = 80;
}
void Archer::attack() {
    cout << "Ȱ�� ���." << endl;
}