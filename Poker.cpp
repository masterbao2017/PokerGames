/*
 * Poker.cpp
 *
 *  Created on: 2018年12月7日
 *      Author: hbm
 */

#include "Poker.h"
#include <algorithm>

PokerSuit::PokerSuit(std::initializer_list<Poker> pokerList): pokers(pokerList)
{
    for(auto elem = pokerList.begin(); elem != pokerList.end(); ++elem)
    {
        std::string dot = elem->dots;
        if (pokerDotMap.count(elem->dots) > 0)
        {
            dot = pokerDotMap[elem->dots];
        }

        std::string color = elem->color;
        if (pokerColorMap.count(elem->color))
        {
            color = std::to_string(pokerColorMap[elem->color]);
        }

        rebuildPokers.push_back(dot + color);
        sort(rebuildPokers.begin(), rebuildPokers.end());
        reverse(rebuildPokers.begin(), rebuildPokers.end());
    }
}
