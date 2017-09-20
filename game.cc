//
// Created by edward on 9/20/17.
//

#include"game.h"
#include<iostream>
#include<string>
using namespace std;

Game::Game(int player_num, vector<string> player_names) {
  if(player_names.empty()) {
    for (int i = 0; i < player_num; i++) {
      player_list.emplace_back(Player(player_names[i]));
    }
  }
  else {
    for (int i = 0; i < player_num; i++) {
      player_list.emplace_back(Player());
    }
  }
}

void Game::action(std::string cmd){
  shared_ptr<Card> in_play;
  if (cmd == "left") {
    in_play = player_list[curr_player].get_card()
  }
}
void Game::rule(){

}
