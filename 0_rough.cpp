class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        map<char, int> subStr;
        map<char, int> str;

        for (int i = 0; i < ransomNote.length(); i++)
        {
            subStr[ransomNote[i]]++;
        }

        for (int i = 0; i < magazine.length(); i++)
        {
            str[magazine[i]]++;
        }

        bool flag = false;

        auto it1 = subStr.begin();
        auto it2 = str.begin();

        while (it2 != str.end())
        {
            if (it1->first == it2->first)
            {
                if (it2->second >= it1->second)
                {
                    flag = true;
                }
                else
                {
                    return false;
                }
            }
            it1++;
            it2++;
        }
        return flag;
    }
};


// 112 test case

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        map<char, int> subStr;
        map<char, int> str;

        for (int i = 0; i < ransomNote.length(); i++)
        {
            subStr[ransomNote[i]]++;
        }

        for (int i = 0; i < magazine.length(); i++)
        {
            str[magazine[i]]++;
        }

        bool flag = false;

        for (auto j : subStr)
        {
            for (auto i : str)
            {
                if (i.first == j.first)
                {
                    if (i.second >= j.second)
                    {
                        flag = true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return flag;
    }
};