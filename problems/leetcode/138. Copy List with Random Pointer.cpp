/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* list1) {
        if(!list1) return nullptr;

        unordered_map<Node*, Node*> copies;
        Node* prevHeadCopy = new Node(0);

        Node* list2It = prevHeadCopy;
        Node* list1It = list1;

        while(list1It) {
            list2It->next = new Node(list1It->val);

            copies.emplace(list1It, list2It->next);
            list2It = list2It->next;
            list1It = list1It->next;
        }

        list1It = list1;
        while(list1It) {
            copies[list1It]->random = copies[list1It->random];
            list1It = list1It->next;
        }

        return prevHeadCopy->next;
    }
};
