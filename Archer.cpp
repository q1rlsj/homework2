#include "Archer.h"
#include "monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) :Player(nickname) /* 빈칸 3: 부모 클래스의 생성자 호출 */ {
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    accuracy = 80;
}
void Archer::attack() {
    cout << "활을 쏜다." << endl;
}