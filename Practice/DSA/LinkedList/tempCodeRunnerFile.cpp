
    void deleteAlternate(Node*& head) {

        Node* curr_node = head;
        while (curr_node != NULL && curr_node->next != NULL) {
            curr_node->next = curr_node->next->next;
            Node* temp = curr_node->next;
            free(temp);
            curr_node = curr_node->next;
        }
    }