                incrementalValue = currentValue;
            }
            ListNode temp = *(new ListNode(incrementalValue));
            current->next = new ListNode(0);
            *(current->next) = temp;
            if (currentL1 != nullptr)
            {
                currentL1 = currentL1->next;
            }
            if (currentL2 != nullptr)
            {
                currentL2 = currentL2->next;
            }
            current = current->next;
        }
        if (carry > 0)
        {
            current->next = new ListNode(carry);
        }

        return head->next;
    }

[
