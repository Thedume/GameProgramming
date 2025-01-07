#include <iostream>

using namespace std;

// 변수 선언
// [타입] [이름];

// char : 1
// shot : 2
// int : 4
// __int64(long long) : 8
int hp;
int maxHP;

int main()
{
    maxHP = 100;

    hp = maxHP;

    cout << "hp : " << hp << "\n";
}