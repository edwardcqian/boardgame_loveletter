//
// Created by edward on 9/20/17.
//

#ifndef LOVE_LETTER_PLAYER_H
#define LOVE_LETTER_PLAYER_H

#include<memory>
#include<string>
#include<vector>

class Card;

class Player{
  std::vector<std::shared_ptr<Card>> hand;
  std::string id;
public:
  Player(std::string id);
  Player();
  void draw(std::shared_ptr<Card> card);
  std::shared_ptr<Card> get_card(bool card_num);
};

#endif //LOVE_LETTER_PLAYER_H
