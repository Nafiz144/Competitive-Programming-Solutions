class Solution
{
public:
    int countWords(string list[], int n)
    {
        map<string, int> mp;
        for (int i = 0; i < n; i++)
            mp[list[i]]++;
        int counter = 0;
        for (auto x : mp)
        {
            if (x.second == 2)
                counter++;
        }
        ` return counter;
    }
};