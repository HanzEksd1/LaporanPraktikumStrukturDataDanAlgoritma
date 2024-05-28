#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    Mahasiswa *next;
};

Mahasiswa *front = nullptr;
Mahasiswa *back = nullptr;

bool isEmpty()
{
    return front == nullptr;
}

void enqueueMahasiswa(string nama, string nim)
{
    Mahasiswa *newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->nim = nim;
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
}

void dequeueMahasiswa()
{
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        Mahasiswa *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            back = nullptr;
        }
        delete temp;
    }
}

int countQueue()
{
    int count = 0;
    Mahasiswa *temp = front;
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
        dequeueMahasiswa();
    }
}

void viewQueue()
{
    if (isEmpty())
    {
        cout << "Antrian Mahasiswa: kosong" << endl;
    }
    else
    {
        cout << "\nAntrian Mahasiswa:" << endl;
        Mahasiswa *temp = front;
        while (temp != nullptr)
        {
            cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    enqueueMahasiswa("Ilhan Sahal Mansiz", "2311102029");
    enqueueMahasiswa("Asfi", "654321");
    viewQueue();
    cout << "Jumlah Mahasiswa dalam antrian: " << countQueue() << endl;

    dequeueMahasiswa();
    viewQueue();
    cout << "Jumlah Mahasiswa dalam antrian: " << countQueue() << endl;

    clearQueue();
    viewQueue();
    cout << "\nJumlah Mahasiswa dalam antrian: " << countQueue() << endl;

    return 0;
} // 2311102029 ILHAN SAHAL MANSIZ