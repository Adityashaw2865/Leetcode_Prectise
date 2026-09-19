class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        queue<int> q;
        
        // Queue mein person ke indexes daalo
        for(int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }
        
        int time = 0;
        
        while(true) {
            
            int person = q.front();
            q.pop();
            
            // Ek ticket buy ki
            tickets[person]--;
            time++;
            
            // Agar k wala person finish ho gaya
            if(person == k && tickets[person] == 0) {
                return time;
            }
            
            // Agar tickets abhi bache hain
            if(tickets[person] > 0) {
                q.push(person);
            }
        }
    }
};