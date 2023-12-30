class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        int cnt[26] = {0};
        //Calculating the frequency of each char.
        for(int i=0; i<n; i++){
            for(char x : words[i]){
                cnt[x - 'a']++;
            }
        }
        //Checking if its meeting the condition or not.
        for(auto x : cnt){
            if(x%n != 0) return false;
        }

        return true;
    }
};

//Here we just have to check if each character occurs a number of times that is a multiple of the total number of words.