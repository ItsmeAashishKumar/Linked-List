void reverseLinkedList(Node *head, Node *tail)
{
    // Write your code here
    Node *current = head;
    if (current != tail)
    {
        int temp = current->data;
        current->data = tail->data;
        tail->data = temp;
        while (current->next != tail)
            current = current->next;
        if (head->next == tail)
            return;
        reverseLinkedList(head->next, current);
    }
    else
        return;
}

Node *kReverse(Node *head, int k)
{
    // Write your code here
    if (head == NULL)
        return head;
    int count = k;
    Node *current = head;
    Node *prev = head;
    while (current != NULL)
    {
        while (count != 1 && count != 0 && prev->next != NULL)
        {
            prev = prev->next;
            count--;
        }
        reverseLinkedList(current, prev);
        prev = prev->next;
        current = prev;
        count = k;
    }
    return head;
}