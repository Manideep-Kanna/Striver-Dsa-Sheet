  Node* copyRandomList(Node* head) {
        Node*temp=head,*forw=head;
        while(temp){
            forw=temp->next;
            Node*copy=new Node(temp->val);
            temp->next=copy;
            copy->next=forw;
            temp=forw;
        }
       temp=head;
        while(temp){
        if(temp->random!=NULL)
            temp->next->random=temp->random->next;
            temp=temp->next->next;
            }
        Node*dummy=new Node(0);
        Node*copy=dummy;
        temp=head,forw=head;
        while(temp){
            forw=temp->next->next;
            copy->next=temp->next;
            temp->next=forw;
            temp=forw;
            copy=copy->next;
        }
        return dummy->next;
        
    }