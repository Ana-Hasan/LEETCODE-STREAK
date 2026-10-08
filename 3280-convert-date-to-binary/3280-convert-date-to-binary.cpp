class Solution {
public:
    string binary2decimal(int n){
        string ans = "";

        while(n > 0){
            ans += (n & 1) + '0';
            n = n/2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        return binary2decimal(year) + '-' + binary2decimal(month) + '-' + binary2decimal(day);
        
    }
};