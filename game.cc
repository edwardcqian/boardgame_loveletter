//
// Created by edward on 9/20/17.
//

#include"game.h"
#include<iostream>
#include<string>
#include<sstream>
#include"player.h"
using namespace std;


Game::Game(int player_num, vector<string> player_names) {
  for (int i = 0; i < player_num; i++) {
    player_list.emplace_back(Player(player_names[i]));
  }
}


void Game::run_game(istream in){
  int card;
  string cmd;
// player starts round
  cout << "Hello Player " << curr_player << " " << player_list[curr_player].get_name << endl;
// player draws
  player_list[curr_player].draw(deck[round]);
  round++;
// print current card
  player_list[curr_player].print_cards();
// player decides which card to play
  cout << "which card to play?" << endl;
  player_list[curr_player].print_cards();
  in >> cmd;
  if (cmd == "A") {
    card = player_list[curr_player].get_card(0);
    player_list[curr_player].discard(0);
  }
  else if (cmd == "B") {
    card = player_list[curr_player].get_card(1);
    player_list[curr_player].discard(0);
  }
  use_card(card, in);
}
void Game::rule(){
  cout << "Game rules" << endl;
}
