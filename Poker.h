/*
 * Poker.h
 *
 *  Created on: 2018年12月7日
 *      Author: hbm
 */

#ifndef POKER_H_
#define POKER_H_

#include <string>
#include <initializer_list>
#include <vector>
#include <map>

const std::string POKER_COLOR_SPADES = "Spade";
const std::string POKER_COLOR_HEARTS= "Hearts";
const std::string POKER_COLOR_CLUBS = "Clubs";
const std::string POKER_COLOR_DIAMONDS = "Diamonds";

enum PokerType
{
    HighCard = 1,
    Pair = 2,
    Straight = 3,
    Flush = 4,
    StraightFlush = 5,
    Bomb = 6,
};

struct Poker
{
    std::string dots;
    std::string color;
};



/*
 * A B C D H J K L M N O P Q
 * 2 3 4 5 6 7 8 9 10 J Q K A
 *                 A  B C D E
 *
 * */

std::map<std::string, std::string> pokerDotMap = { {"10", "A"},
                                         {"J",  "B"},
                                         {"Q",  "C"},
                                         {"K",  "D"},
                                         {"A",  "E"}};//c++ 11 独有的

std::map<std::string, int> pokerColorMap = { {POKER_COLOR_SPADES,   8},
                                             {POKER_COLOR_HEARTS,   4},
                                             {POKER_COLOR_CLUBS,    2},
                                             {POKER_COLOR_DIAMONDS, 1}};

struct PokerSuit
{
    PokerSuit(std::initializer_list<Poker> pokerList);
    void genPokerType();

    std::vector<Poker> pokers;
    std::vector<std::string> rebuildPokers;
    PokerType pokerType;
};



bool comparePokerSuit()
{


}


#endif /* POKER_H_ */
