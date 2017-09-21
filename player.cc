//
// Created by edward on 9/20/17.
//

#include"player.h"
#include"game.h"
#include<iostream>

using namespace std;

Player::Player(string name) : name{name} {}

void Player::draw(int card){
  hand.emplace_back(card);
};

// return card number and also discard the card
int Player::get_card(bool card_num) {
  return hand[card_num];
}

void Player::discard(bool card_num) {
  hand.erase(hand.begin() + card_num);
}

string Player::get_name() {
  return name;
}

void Player::print_cards() {
  cout << "Card A:" << hand[0] << " " << card_name(hand[0]) << endl;
  cout << "Card B:" << hand[1] << " " << card_name(hand[1]) << endl;
}