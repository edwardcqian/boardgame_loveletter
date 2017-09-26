//
// Created by edward on 9/20/17.
//

#ifndef LOVE_LETTER_PLAYER_H
#define LOVE_LETTER_PLAYER_H

#include<memory>
#include<string>
#include<vector>

enum player_status {
  dead,
  alive,
  protect
};

class Player{
  std::vector<int> hand;
  std::string name;
  int position;
  int status; // 0: dead, 1: alive, 2: protected
public:
  Player(std::string name, int pos);
  void draw(int card);
  int get_card(bool card_num);
  std::string get_name();
  void print_cards();
  void discard(bool card_num);
  int check_status();
  void change_status(int status);
  void targeted(Player &inPlay, int next, int &deck, int card, int secondary = 0);
};

#endif //LOVE_LETTER_PLAYER_H
