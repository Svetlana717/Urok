#include "TXLib.h"
using namespace std;

#define SEARCH ' '
char matrix[4][4] = {
{1, 2, 3, 4},
{5, 6, 7, 8},
{9, 10, 11, 12},
{13, 14, 15, 16}
} ;
void main(int argc, char* argv[]);
void get_player_move(void);
void disp_matrix(void);
char check (void);

int main()
{
int x;
int y;
int xTreasure;
int yTreasure;
int t;
int win=0;
char done;
cout << "This is the game of Treasure hunt.\n" << endl;
int Move;
cout << "How many moves will you find treasures (from 1 to 16)?\n" << endl;
cin >> Move;
main(int argc, char* argv[]);
do {
disp_matrix();
while (Move==0 && win==1)
{
  get_player_move();
  check();
  Move=Move-1;
}
  matrix[xTreasure][yTreasure]='X';
}
if(win=1) cout << "You found a treasure !!!\n" << endl;
else cout << "You did not find the treasure. Do not worry. Try again.\n" << endl;
disp_matrix();
return 0;
}

void main(int argc, char* argv[])
{
    srand( time( 0 ) );
    xTreasure = 1 + rand() % 4 ;
    yTreasure = 1 + rand() % 4 ;
    system("pause");
    return 0;
}

void get_player_move(void)
{
cout << "Enter coordinates for your X (from 1 to 4).\n" << endl;
cin >> x;
cout << "Enter coordinates for your Y (from 1 to 4).\n" << endl;
cin >> y;
if (x<0 || y<0 || x>3 || y>3 || matrix[x] [y] !=SEARCH)
{
cout << "Invalid move, try again.\n" << endl;
get_player_move();
}
else matrix[x][y]='•';
}

void disp_matrix(void)
{
for(t=0; t<4; t++)
{
cout << " %c | %c | %c| %c", matrix[t][0], matrix[t][1], matrix[t][2], matrix[t][3] << endl;
if(t!=2) cout << "\n-|-|-|-\n" << endl;
}
cout << "\n" << endl;
}

char check(void)
{
if (x=xTreasure && y=yTreasure) win=1;
else win=2;
}
