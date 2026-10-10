
class Solution {
public:
    string decimalToBinary(int s) {
        string ans = "";
        if (s == 0) return "0";

        while (s > 0) {
            ans += (s & 1) + '0';
            s = (s >> 1);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    int binaryToDecimal(string s) {
        int ans = 0;

        for (char bit : s) {
            ans = (ans << 1) | (bit - '0');
        }

        return ans;
    }

    int bitwiseComplement(int n) {
        string binary = decimalToBinary(n);
        int len = binary.length();

        for (int i = 0; i < len; i++) {
            if (binary[i] == '1') {
                binary[i] = '0';
            }
            else {
                binary[i] = '1';
            }
        }

        int decimal = binaryToDecimal(binary);

        return decimal;
    }
};
