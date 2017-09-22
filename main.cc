#include <iostream>
#include <vector>
#include"game.h"
using namespace std;

int main() {
  int players = 0;
  vector<string> names;
  cout << "Love Letter Game" << endl;
  while (players < 2) {
    cout << "How many players?" << endl;
    cin >> players;
  }
  for (int i = 0; i < players; i++) {
    names.emplace_back("test");
  }
  // create game
  Game MyGame = Game(players, names);
  while (MyGame.run_game(cin));
  return 0;
}