class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int bits = std::bit_width((unsigned int)n);
        unsigned int mask = (1U << bits) - 1;
        return n ^ mask;
    }
};