class Solution {
public:
    int magicalString(int n) {
        unsigned* string = new unsigned[100000];
        string[0] = 1;
        string[1] = 2;
        string[2] = 2;

        unsigned readIdx = 2;
        unsigned writeIdx = 3;
        while(writeIdx < n) {
        	if(string[readIdx] == 1) {
        		if(string[writeIdx-1] == 1)
        			string[writeIdx++] = 2;
        		else {
        			string[writeIdx++] = 1;
        		}

        	} else {
        		if(string[writeIdx-1] == 2) {
        			string[writeIdx++] = 1;
        			string[writeIdx++] = 1;
        		} else {
        			string[writeIdx++] = 2;
        			string[writeIdx++] = 2;
        		}
        	}
        	readIdx++;
        }
        int ones = 0;
        for(unsigned idx=0; idx < n; ++idx)
        	if(string[idx] == 1)
        		ones++;
        return ones;
    }
};