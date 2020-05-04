    int findComplement(int num) {
        
        int p = 0;
        int x = num;

        // find the smallest power of 2 that is larger than num
        while(x!=0)
        {
            p++;
            x = x/2;
        }

        // complement of num = (2^p - 1) - num
        return (long long)(pow(2, p))-num-1;
        
    }