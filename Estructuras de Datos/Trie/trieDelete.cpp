#include <bits/stdc++.h>
using namespace std;
int cont = 0;
int nodeCount = 0;

struct node {
    char currentCharacter;       
    bool isWord = false;
    int number = 0;             
    struct node *children[27]; 
}*trie; 

void init() {
    trie = new node();
}

void insertWord(string word) {   
    node *currentNode = trie;  
    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';      
        if(currentNode->children[character] == NULL ) {
            currentNode->children[character] = new node();
        }
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = word[i];
    }
    currentNode->isWord = true;
}

bool searchWord(string word) {   
    node *currentNode =  trie;  
    for (int i = 0; i < word.length(); i++) {
        int character = word[i] - 'a';      
        if(currentNode->children[character] == NULL ) {
           return false;
        }
        currentNode = currentNode->children[character];
    }
    return currentNode->isWord;
}

void trieDeleteWord(string word) {
    if(searchWord(word)) {
        node *currentNode = trie;
        int tempDepth = 0;
        int eliminacionDeNodo = 0;
        for (int i = 0; i< word.length(); i++) {
            int character = word[i] - 'a';
            if(currentNode->children[character]->isWord && word.length() != i+1) {
                eliminacionDeNodo+= tempDepth;
            }
            currentNode = currentNode->children[character];
            tempDepth++;
        }
        currentNode->isWord = false;
        currentNode = trie;
        for (int i = 0; i< eliminacionDeNodo; i++) {
            int character = word[i] - 'a';
            currentNode = currentNode->children[character];
        }
        currentNode = NULL;
        delete currentNode;
    }
}

int main() {
  init();
  return 0;
}
