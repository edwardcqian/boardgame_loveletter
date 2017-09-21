//
// Created by edward on 9/20/17.
//

#ifndef LOVE_LETTER_PLAYER_H
#define LOVE_LETTER_PLAYER_H

#include<memory>
#include<string>
#include<vector>

class Player{
  std::vector<int> hand;
  std::string name;
public:
  Player(std::string name);
  void draw(int card);
  int get_card(bool card_num);
  std::string get_name();
  void print_cards();
  void discard(bool card_num);
};

#endif //LOVE_LETTER_PLAYER_H
