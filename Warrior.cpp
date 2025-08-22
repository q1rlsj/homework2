#include "warrior.h"
#include "monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)/* 빈칸 3: 부모 클래스의 생성자 호출 */ {
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 80;
}
void Warrior::attack() {
    cout << "검을 휘두른다." << endl;
}