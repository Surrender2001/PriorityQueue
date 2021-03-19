#pragma once
#include <iostream> 
using namespace std;


template<class T>
class Node
{
    T data;
    int priority;
    Node* next;


    Node* newNode(T d, int p)
    {
        Node* temp = (Node*)malloc(sizeof(Node));
        temp->data = d;
        temp->priority = p;
        temp->next = nullptr;

        return temp;
    }

    int peek(Node** head)
    {
        return (*head)->data;
    }


    void pop(Node** head)
    {
        Node* temp = *head;
        (*head) = (*head)->next;
        delete(temp);
    }

 
    void push(Node** head, T d, int p)
    {
        Node* start = (*head);

        Node* temp = newNode(d, p);


        if ((*head)->priority > p)
        {

            // Insert New Node before head 
            temp->next = *head;
            (*head) = temp;
        }
        else
        { 
            while (start->next != nullptr &&
                start->next->priority < p)
            {
                start = start->next;
            }
            temp->next = start->next;
            start->next = temp;
        }
    }

    int isEmpty(Node** head)
    {
        return (*head) == nullptr;
    }



};
