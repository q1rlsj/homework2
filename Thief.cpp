#include "Thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) :Player(nickname) /* ��ĭ 3: �θ� Ŭ������ ������ ȣ�� */ {
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    speed = 80;
}
void Thief::attack() {
    cout << "ǥâ�� ����Ѵ�." << endl;
}

