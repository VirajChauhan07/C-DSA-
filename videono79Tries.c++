#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class TrieNode
{

public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{

public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // Base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // Assumptions the words will be in Caps
        int index = word[0] - 'A';
        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
            
        }
        // Absent
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
           
        }
        // Reccursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {

        // Base Case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        // Assumption of Big letter case
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index]; 

        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("DOING");

    cout << "present or not " << t->searchWord("DOI") << endl;

    return 0;
}