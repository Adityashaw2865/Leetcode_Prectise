class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        //Dono arrays ko sort karo.
        //Same index ke elements ka absolute difference nikalo.
        //Saare differences ka sum return karo.
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int n=seats.size();
        int count=0;
        int diff=0;
        for(int i=0;i<n;i++){
            diff=abs(seats[i]-students[i]);
            count+=diff;
        }
        return count;
    }
};