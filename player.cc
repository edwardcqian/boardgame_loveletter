//
// Created by edward on 9/20/17.
//

#include"player.h"
#include"game.h"
#include<iostream>

using namespace std;

Player::Player(string name, int pos) : name{ name }, position{ pos }, status{ 1 } {}

void Player::draw(int card){
  hand.emplace_back(card);
};

// return card number and also discard the card
int Player::get_card(bool card_num) {
  if (hand.size() == 0) {
    return -1;
  }
  else {
    return hand[card_num];
  }
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

bool Player::check_status() {
  return status;
}

void Player::change_status(int num) {
  status = num;
  if (status == 0) {
    cout << "Player " << position << " is out of the game!" << endl;
  }
}

// card: the card in play, secondary: the second card, guess = guess
void Player::targeted(Player &inPlay, int next, int &deck, int card, int secondary) {
  if (card == 4 || card == 7 || card == 8) { // targeting self
    if (card == 4) {
      change_status(protect);
    }
    else if (card == 7) {
    }
    else { //8
      change_status(dead);
    }
  }
  else { // being targeted
    if (card == 1) {
      if (secondary == hand[0]) { // guessed right
        change_status(dead);
      }
      else { // guessed wrong
        cout << card << " " << card_name(card) << " failed" << endl;
      }
    }
    else if (card == 2) {
      cout << "Player " << position << " has " << hand[0] << " " << card_name(hand[0]) << endl;
    }
    else if (card == 3) {
      if (secondary < hand[0]) { // other player loses
        inPlay.change_status(dead);
      }
      else if (secondary == hand[0]) { // tie
        cout << card << " " << card_name(card) << " failed" << endl;
      }
      else { // this play lost
        change_status(dead);
      }
    }
    else if (card == 5) {
      cout << "Player " << position << " discarded " << hand[0] << " " << card_name(hand[0]) << endl;
      if (hand[0] == 8) { // discarded 8 princess
        change_status(dead);
      }
      else { // discard and draw
        hand.pop_back();
        draw(next);
        deck++;
      }
    }
    else if (card == 6) {
      // other player using discard and draw to replay other player's card
      inPlay.discard(0);
      inPlay.draw(hand[0]);
      // draw other players card/
      hand.pop_back();
      draw(secondary);
    }
  }
}