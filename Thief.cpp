#include "Thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) :Player(nickname) /* 빈칸 3: 부모 클래스의 생성자 호출 */ {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 80;
}
void Thief::attack() {
    cout << "표창을 사용한다." << endl;
}

