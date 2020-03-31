/*
Given a string consisting of lower case alphabets.

Rules of the Game:

A player can choose a pair of similar consecutive characters and erase them.
There are two players playing the game, the player who makes the last move wins.
The task is to find the winner if A goes first and both play optimally.



Examples:

Input: str = "kaak" 
Output: B
Explanation:
    Initial String: "kaak"
    A's turn:
        removes: "aa"
        Remaining String: "kk"
    B's turn:
        removes: "kk"
        Remaining String: ""
    Since B was the last one to play
    B is the winner.

Input: str = "kk"
Output: A

*/


#include <bits/stdc++.h>

using namespace std;

//Explanation: Whenever we find unique character we will push it into stack otherwise pop an element
// from stack and increment count and after completing the loop just check whether count is even or odd.
//s ="kaak"
// i    s[i]  stack         count      s at i
// 0    k      push()       0           k
// 1    a      push()       0           ak
// 2    a      pop()        1           k
//3     k      pop()        2           empty

// so now count is even therefor B is the winner
void winner(string s)
{
    stack<char> h;int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(h.empty() || h.top() != s[i] )
        {
            h.push(s[i]);

        }
        else
        {
            h.pop();
            count++;
        }               
    }
    if(count%2==0)
    {
        cout << "winner is : B\n" ;
    }
    else
    {
        cout << "winner is : A\n";
    }
    
}

int main() {
   string s ="kaak";
   winner(s);
   return 0;
}