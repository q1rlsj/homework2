#include "warrior.h"
#include "monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)/* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */ {
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    HP = 80;
}
void Warrior::attack() {
    cout << "���� �ֵθ���." << endl;
}