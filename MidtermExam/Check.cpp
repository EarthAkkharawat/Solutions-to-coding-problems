#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_set>
using namespace std;
//3 2 1
// 1 2 4 3
// 3 5 8 7 6 4 2 1
int main()
{
    2 จงเขียนคลาสMultiAuctionตามข้อก าหนดที่ได้ระบุไว้ข้างต้น ถ้าหากเนื้อที่ไม่พอเขียน ให้เขียนไว้ด้านหลังของหน้า 7 เท่านั้นclass MultiAuction
    {
    protected:
        map < string, map<int, queue<string>> bidding;
        map<string, int> amount;
        long long time;

    public:
        void open_auction(string item, int qty) { amount[item] = qty; }
        void add_bidding(string user, string item, int price)
        {
            time++;
            bidding[item][-1 * price].push_back(user);
        }
        vector<pair<string, int>> close_auction(string item)
        {
            int qty = amount[item];
            vector<pair<string, int>> result;
            while ((qty > 0) && bidding[item].size() > 0)
            {
                int price = -1 * bidding[item].begin()->first;
                string user = bidding[item].begin()->second.front();
                if (ask_user_confirmation(user, item, price))
                {
                    result.push_back({user, price});
                    qty--;
                }
                biddingbidding[item].begin()->second.pop(); if (bidding[item]).begin()->second.empty()) {bidding[item].erase(bidding[item].begin());}
            }
            return result;
        }
    };
}
