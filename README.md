# Love letter in C++
## Overview
Love letter is a popular fast paced boardgame.

## Project outline
Model:
- input read
- game

View:
- command line

controller:
- keyboard input
- key press

Game:

Card class
- name
- number
- action (visits a player, pass itself)

Player class
- HAS A: card vector
- targeted method (was targeted by a card)
- action method
	- can target a player (which calls that card's action method)
	- can do nothing (choose one card)
	- either way the gets discarded
- rules method (print the rules)
optional:
- check graveyard
- check deck (debugging)


Phrases:
Game setup:
- generate player order
- pre generate deck
- pick starting player
- deal cards

Player phrase:
- draw next card
- play action
Card action phrase:
- play action on target player
- check for defeat (if needed)
- discard action card
- shift to next player

## Classes and methods

Model:
- Objects
	- Game
	- display/View (observer)
- methods
	- void cmd
		- reads from Controller
		- handles commands
		- calls game's public methods
	- observer

Game:
- Object
	- list of Players
	- list of Cards
	- round counter
	- player counter

- methods
	- void action
		- prompts Model.cmd
		- changes game status 
			- give player card
		- updates view
	- void rule
		- prints rules

Player
- Object
	- list of Cards (Max 2)
	- id (name)
- methods
	- void get_card

Card
- object
	- name


View
- Object
	- display
- methods
	- observer
