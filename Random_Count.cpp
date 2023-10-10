#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;



int Get_random(int x, int y)
{
    int num = x + rand() % (x - y + 1);

    return num;
}

void Players()
{
    setlocale(LC_ALL, "Russian");

    string name_player1;
    string name_player2;
    int player1 = Get_random(1, 100);
    srand(time(NULL));
    int player2 = Get_random(1, 100);
    srand(time(NULL));
    char new_game;


    cout << "Введите имя первого игрока: " << endl;
    cin >> name_player1;
    cout << "Введите имя второго игрока: " << endl;
    cin >> name_player2;




    if (player1 > player2)
    {
        cout << "У игрока " << name_player1 << ": " << player1 << " очков!" << endl;
        cout << "У игрока " << name_player2 << ": " << player2 << " очков!" << endl;
        cout << "Победил: " << name_player1 << endl;
        cout << "Начать новую игру? Y/N?" << endl;
        cin >> new_game;

        if (new_game == 'Y' || 'y')
        {
            Players();
        }
        else
        {
            cout << "Конец игры!" << endl;
        }

    }
    else if (player1 < player2)
    {
        cout << "У игрока " << name_player1 << ": " << player1 << " очков!" << endl;
        cout << "У игрока " << name_player2 << ": " << player2 << " очков!" << endl;
        cout << "Победил: " << name_player2 << endl;
        cout << "Начать новую игру? Y/N?" << endl;
        cin >> new_game;

        if (new_game == 'Y')
        {
            Players();
        }
        else
        {
            cout << "Конец игры!" << endl;
        }

    }
    else
    {
        cout << "У игрока " << name_player1 << ": " << player1 << " очков!" << endl;
        cout << "У игрока " << name_player2 << ": " << player2 << " очков!" << endl;
        cout << "Ничья!" << endl;
        cout << "Начать новую игру? Y/N?" << endl;
        cin >> new_game;

        if (new_game == 'Y')
        {
            Players();
        }
        else
        {
            cout << "Конец игры!" << endl;
        }

    }
}

int main()
{
    Players();

    return 0;
}