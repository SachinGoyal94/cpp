#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int changer(vector<int>& coins, int amount,int size,int coin,int count)
    {
        if(amount<coins[0])
        {
            return -1;
        }
        if((amount%coin)==0)
        {
            amount=amount-coin;
            if(amount==0)
            {
                return count+1;
            }
            return changer(coins,amount,size,coin,count+1); 
        }
        size--;
        return changer(coins,amount,size,coins[size-1],count);
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        sort(coins.begin(),coins.end());
        if(amount==0)
        {
            return 0;
        }
        if(amount<coins[0])
        {
            return -1;
        }
        
        int size=coins.size();
        int count=0;
        count=changer(coins,amount,size,coins[size-1],count); 
        return count;
    }
};
int main()
{
    vector<int>coins={2};
    int amount=3,size=coins.size();
    if(amount<coins[0])
    {
        cout<<-1;
        return -1;
    }
    if(amount==0)
    {
        cout<<0;
        return 0;
    }
    int count=0;
    cout<<changer(coins,amount,size,coins[size-1],count);
    
}