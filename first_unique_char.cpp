class Solution
{
public:
    int firstUniqChar(string st)
    {

        vector<int> freq(26, 0);

        for (char c : st)
        {

            freq[c - 'a']++;
        }

        for (int i = 0; i < st.size(); i++)
        {

            if (freq[st[i] - 'a'] == 1)
            {
                return i;
                break;
            }
        }

        return -1;
    }
};
