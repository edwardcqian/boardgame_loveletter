//
// Created by edward on 9/20/17.
//
#ifndef LOVE_LETTER_MODEL_H
#define LOVE_LETTER_MODEL_H
#include"game.h"

// model is the main game
class Model{
  Game MyGame;
public:
  Model(int player_num);
  void cmd();
};

#endif //LOVE_LETTER_MODEL_H
