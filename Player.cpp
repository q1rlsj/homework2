#include "player.h"


Player::Player(string nickname) {
    this->nickname = nickname;
    this->level = 1;
    this->HP = 60;        
    this->MP = 60;        
    this->power = 4;
    this->defence = 4;
    this->accuracy = 4;
    this->speed = 4;

    cout << "* 플레이어 " << nickname << " 이(가) 생성되었습니다." << endl;
}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "직업: " << job_name << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
