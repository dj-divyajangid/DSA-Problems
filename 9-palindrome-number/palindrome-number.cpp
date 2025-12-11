class Solution {
public:
    bool isPalindrome(int x) {
        	long long rev = 0;
	long long digit;

	long temp = x;

	while(x>0) {
		digit = x%10;
		rev = rev*10+digit;
		x = x/10;

	}

	if(rev!=temp) {
	   return false;
	}
	if(true) {
		return "palindrome";
	}
	else {
		return "NP";
	}

    }
};