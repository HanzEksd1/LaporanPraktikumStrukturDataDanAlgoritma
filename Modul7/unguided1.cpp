#include <iostream>
using namespace std;

struct Node 
{
    string data;
    Node *next;
};

Node *front = nullptr;
Node *back = nullptr;

bool isEmpty()
{
    return front == nullptr;
}

void enqueAntrian(string data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (isEmpty())
    {
        front = back = newNode;
    }
    else 
    {
        back->next = newNode;
        back = newNode;
    }
    cout << "Data '" << data << "' telah ditambahkan ke antrian." << endl;
}

void dequeueAntrian()
{
    if (isEmpty())
    {
        cout << "Antrian Kosong" << endl;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            back = nullptr;
        }
        delete temp;
        cout << "Data terdepan telah dihapus dari antrian." << endl;
    }
}

int countQueue()
{
    int count = 0;
    Node *temp = front;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void clearQueue()
{
    while (isEmpty())
    {
        dequeueAntrian();
    }
    cout << "Semua data dalam antrian telah dihapus." << endl;
}

void viewqQueue()
{
    if (isEmpty())
    {
        cout << "Antrian Kosong" << endl;
    }
    else
    {
        Node *temp = front;
        cout << "Data antrian teller:" << endl;
        int i = i;
        while (temp != nullptr)
        {
            cout << i << ". " << temp->data << endl;
            temp = temp->next;
            i++;
        }
    }
}

int main ()
{
    enqueAntrian("Andi");
    enqueAntrian("Maya");
    viewqQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    dequeueAntrian();
    viewqQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    clearQueue();
    viewqQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    return 0;

} //2311102029 ILHAN SAHAL MANSIZ 