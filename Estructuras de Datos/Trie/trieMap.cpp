#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

struct node
{
    map<char, node*> mapero;
    bool isWord;                
} *trie;

void init()
{
    trie = new node();
    trie->isWord = false;
}

void insertWord(string word)
{
    node *currentNode =  trie;  
    for (int i = 0; i < word.length(); i++)
    {
        if (!currentNode->mapero[word[i]])
        {
            currentNode->mapero[word[i]] = new node();
        }
        currentNode = currentNode->mapero[word[i]];
        currentNode->isWord=false;
    }
    currentNode->isWord=true;
}

int main() {
    // Inicializar Trie
    init(); 
    string word = "hola";
    insertWord(word);
    string word = "holas";
    insertWord(word);
    return 0;
}
