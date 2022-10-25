bool isPalindrome(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return true;
    Node *current = head;
    Node *prev = NULL;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    if (head->data == current->data)
    {
        prev->next = NULL;
        delete current;
        return isPalindrome(head->next);
    }
    else
        return false;
}