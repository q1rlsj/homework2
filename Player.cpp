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

    cout << "* �÷��̾� " << nickname << " ��(��) �����Ǿ����ϴ�." << endl;
}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "����: " << job_name << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}
