#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        string s;
        sort(ranks.begin(), ranks.end());
        sort(suits.begin(), suits.end());

        int rank = 0, suit = 0, count = 1;
        for (int i = 1; i < ranks.size(); i++)
        {
            if (ranks[i] == ranks[i - 1])
            {
                count++;
                rank = max(rank, count);
            }
            else
                count = 1;
        }
        count = 1;
        for (int i = 1; i < suits.size(); i++)
        {
            if (suits[i] == suits[i - 1])
            {
                count++;
                suit = max(suit, count);
            }
            else
                count = 1;
        }

        if (suit == 5)
            s = "Flush";
        else if (rank >= 3)
            s = "Three of a Kind";
        else if (rank == 2)
            s = "Pair";
        else
            s = "High Card";

        return s;
    }
};