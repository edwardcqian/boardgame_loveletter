//
// Created by edward on 9/20/17.
//

#include"player.h"
#include"card.h"


using namespace std;

Player::Player(string id) : id{id} {}

void Player::draw(std::shared_ptr<Card> card){
  hand.emplace_back(card);
};

shared_ptr<Card> Player::get_card(bool card_num) {
  return hand[card_num];
}