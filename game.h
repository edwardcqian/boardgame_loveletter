//
// Created by edward on 9/20/17.
//
#ifndef LOVE_LETTER_GAME_H
#define LOVE_LETTER_GAME_H
#include<vector>
#include<memory>
#include<string>
#include"player.h"

enum card_name {
  Guard,
  Priest,
  Baron,
  Handmaiden,
  Prince,
  King,
  Countess,
  Princess
};

class Game{
  std::vector<Player> player_list;
  std::vector<int> deck;
  int round;
  int curr_player;
public:
  Game(int player_num, std::vector<std::string> player_names);
  void run_game(std::istream in);
  void rule();

};

#endif //LOVE_LETTER_GAME_H
