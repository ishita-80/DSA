class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
    if (numerator==0) return "0";
    string result = "";
    if ((numerator<0) ^ (denominator < 0)) {
        result += "-";
    }

    long long num = abs((long long)numerator);
    long long den = abs((long long)denominator);

    result += to_string(num / den);
    long long remainder = num % den;

    if (remainder == 0) {
        return result;
    }

    result += ".";
    unordered_map<long long, int> mp;
    
    while (remainder != 0) {
        if (mp.count(remainder)) {
            int index = mp[remainder];
            result.insert(index, "(");
            result += ")";
            return result;
        }

        mp[remainder] = result.length();
        remainder *= 10;
        result += std::to_string(remainder / den);
        remainder %= den;
    }

    return result;

    }
};