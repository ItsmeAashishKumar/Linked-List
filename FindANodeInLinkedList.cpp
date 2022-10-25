Node *deleteNodeRec(Node *head, int pos)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;
    if (pos == 0)
    {
        Node *current = head;
        head = current->next;
        delete current;
        return head;
    }
    else if (pos == 1)
    {
        Node *temp = head->next->next;
        delete head->next;
        head->next = temp;
        return head;
    }
    else
        deleteNodeRec(head->next, pos - 1);
    return head;
}