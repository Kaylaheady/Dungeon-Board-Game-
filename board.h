#include<iostream>
using namespace std;
class DungeonBoard {
friend ostream& operator<<(ostream& s, const DungeonBoard& db);
public:
DungeonBoard(int _size);
~DungeonBoard();
private:
//data
const int maxTreasures;
int numTreasures;
const int maxMobs;
int numMobs;
int size;
char** boardState;
int** treasures;
int** mobs;
//entrance
int x_enter;
int y_enter;
//exit
int x_exit;
int y_exit;
//functionality
void setupEntrance();
void setupTreasure();
void setupMobs();
};
