
class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n1 = word.size(), n2 = abbr.size();
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            if (isdigit(abbr[j])) {
                if (abbr[j] == '0')
                    return false;

                int current = 0;

                while (j < n2 && isdigit(abbr[j])) {
                    current = current * 10 + (abbr[j] - '0');
                    j++;
                }

                i += current;
            } 
            else {
                if (word[i] != abbr[j])
                    return false;

                i++;
                j++;
            }
        }

        return i == n1 && j == n2;
    }
};
