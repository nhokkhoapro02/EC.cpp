// Khoa Nguyen
// CSCI1-0105. Project: BlackJack card game
// This program will let user play blackjack against comupter

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
// Card suit
enum Suit{HEART,DIAMOND,SPADES,CLOVER};
// Card rank
enum Rank{Ace,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,J,K,Q };
// Structure of a card
struct card {
	char Suit;
	int Rank;
};
// Make global variable for 5 cards and card total
int card(1), card(2), card(3), card(4), card(5), cardTotal;
int main() {
	cout << "Project: BlackJack Card Game" << endl;
	cout << "****************************" << endl;
	cout << "Welcome to BlackJack" << endl;
	cout << "Press Enter to start the game and get your deal cards" << endl;
	cin.get();
	// deal cards
	

	
	return 0;
}
// Function for deal cards
void  playerDealCards() {
	srand(time(NULL));
	// Generate random card
}
void to_win(){
}
void to_lose(){}
void special_fifth_card(){}
void double_ace(){}
