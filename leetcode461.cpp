class leetcode461{
    public:
    int hammingDistance(int x, int y) {
        int xorr = x ^ y;
        int dig = 0;
        while(xorr > 0){
            dig += xorr & 1;
            xorr >>= 1;
        }
        return dig;
}
};