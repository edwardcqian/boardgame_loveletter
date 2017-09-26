//
// Created by edward on 9/20/17.
//

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include"game.h"
#include"player.h"
using namespace std;


// 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8
Game::Game(int player_num, vector<string> player_names) : deck{ 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8 } {
  // create players
  for (int i = 0; i < player_num; i++) {
    player_list.emplace_back(Player(player_names[i], i));
  }
  random_shuffle(deck.begin(), deck.end());
  // deal cards
  for (round = 0; round < player_num; round++) {
    player_list[round].draw(deck[round]);
  }
  curr_player = 0;
}

bool Game::anyAlive(int curr_player) {
  for (int i = 0; i < player_list.size(); i++) {
    if (curr_player != i && player_list[i].check_status() == 1) {
      return true;
    }
  }
  return false;
}

void Game::use_card(int card, istream &in) {
  int player, second;
  if (card != 4 && card != 7 && card != 8) { // using a targeting card
    int ask = 1;
    while (ask == 1) { // get a valid target
      if (anyAlive(curr_player)) {
        cout << "Which player would you like to target?" << endl;
        in >> player;
        if (player >= player_list.size()) { // player doesn't exist
          cout << "Player doesn't exist" << endl;
        }
        else if (player_list[player].check_status() == 0) { // dead
          cout << "Player is out of the game" << endl;
        }
        else if (player_list[player].check_status() == 2) { // protected
          cout << "Player is protected" << endl;
        }
        else if (player == curr_player) {
          cout << "Cannot target self" << endl;
        }
        else { // targeting a valid player
          ask = 0;
          if (card == 1) { // get additional input if guard
            second = 1;
            cout << "which card would you like to guess?" << endl;
            while (second == 1) { // can't target guards
              cout << "Cannot guess 1 Guard!" << endl;
              in >> second;
            }
          }
          else {
            second = player_list[curr_player].get_card(0);
          }
          player_list[player].targeted(player_list[curr_player], deck[round], round, card, second);
        }
      } // if any alive
      else {
        ask = 0;
        cout << "No targets available" << endl;
      }

    }
  }
  else { // target self
    player_list[curr_player].targeted(player_list[curr_player], deck[round], round, card, 1);
  }
}

bool Game::run_game(istream &in){
  int card;
  int discard;
  string cmd;
  bool round_end = 0;
  // find the next available player
// player starts round
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "--------------" << endl;
  cout << "Hello Player " << curr_player << ": " << player_list[curr_player].get_name() << endl;
// player draws
  int card0 = player_list[curr_player].get_card(0);
  int card1 = deck[round];
  player_list[curr_player].draw(card1);
  round++;
// print current card
  player_list[curr_player].print_cards();
// check for auto play condition (countess)
  if (card0 == 7 || card1 == 7) {
    if (card0 == 6 || card0 == 5) {// 7 in pos 1, 6/5 in pos 0
      player_list[curr_player].discard(0);
      round_end = 1;
    }
    else if (card1== 6 || card1 == 5) {// 7 in pos 0, 6/5 in pos 1
      player_list[curr_player].discard(1);
      round_end = 1;
    }
  }
// player decides which card to play
  if (!round_end) {
    // print rules
    rule();
    cout << "Which card to play?" << endl;
    player_list[curr_player].print_cards();
    in >> cmd;
    if (cmd == "A") {
      card = player_list[curr_player].get_card(0);
      player_list[curr_player].discard(0);
      use_card(card, in);
    }
    else if (cmd == "B") {
      card = player_list[curr_player].get_card(1);
      player_list[curr_player].discard(1);
      use_card(card, in);
    }
    else if (cmd == "y") {
      card = player_list[curr_player].get_card(1);
      player_list[curr_player].discard(1);
    }
  }
// ask player if want to end round
  cout << "end turn? (y/n)" << endl;
  in >> cmd;
  while (cmd != "y") {
    cout << "end turn? (y/n)" << endl;
    in >> cmd;
  }
// check for victory and protected players
  int win_array[8] = { -1,-1,-1,-1,-1,-1,-1,-1 };
  std::vector<int> alive_players;
  for (int i = 0; i < player_list.size(); i++) {
    int player_status = player_list[i].check_status();

    if (i != curr_player) { // check protected status for other players, reset if active
      if (player_status == 2) {
        player_list[i].change_status(alive);
      }
    }
    if (player_status >= 1) { // player is alive
      alive_players.emplace_back(i);
      // run the winning array
      int curr_card = player_list[i].get_card(0);
      if (win_array[curr_card-1] < 0) {
        win_array[curr_card-1] = i;
      }
      else {
        win_array[curr_card-1] = i*10;
      }
    }
  }
  if (alive_players.size() > 1) { // if game is still going on, look for the next player
    if (round >= 15) { // all cards are dealt, check for winner
      for (int i = 7; i >= 0; i--) {
        if(win_array[i] >= 0) {
          cout << "Player " << i << " is the Winner!" << endl;
          return 0;
        }
      }
    }
    if (curr_player + 1 == player_list.size()) { // if player is at the end
      curr_player = 0;
    }
    else { // player is not at the end
      curr_player++;
    }
    while (!player_list[curr_player].check_status()) { // if player is out
      if (curr_player + 1 == player_list.size()) { // if player is at the end
        curr_player = 0;
      }
      else { // player is not at the end
        curr_player++;
      }
    }
    return 1;
  }
  else {
    cout << "Player " << alive_players[0] << " wins!" << endl;
    return 0;
  }
}


void Game::rule() {
  cout << "Game rules" << endl;
  cout << "8 " << card_name(8) << " (1): " << "Lose if discarded" << endl;
  cout << "7 " << card_name(7) << " (1): " << "Discard if caught with King or Prince" << endl;
  cout << "6 " << card_name(6) << " (1): " << "Trade hands" << endl;
  cout << "5 " << card_name(5) << " (2): " << "One player discard his or her hand" << endl;
  cout << "4 " << card_name(4) << " (2): " << "Protection until your next turn" << endl;
  cout << "3 " << card_name(3) << " (2): " << "Compare hands; lower hand is out" << endl;
  cout << "2 " << card_name(2) << " (2): " << "Look at a hand" << endl;
  cout << "1 " << card_name(1) << " (5): " << "Guess a player's hand (cannot guess 1 Guard)" << endl;
}
