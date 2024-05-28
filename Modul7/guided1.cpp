#include<iostream>

using namespace std;

const int maksimalQueue = 5; //Maksimal antrian
int front = 0; //Pennanda antrian
int back = 0; //Penanda
string queueTeller[5]; //Fungsi Pengecekan
bool isFull(){ //Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue){
        return true; //-1
    }else{
        return false;
    }
}

bool isEmpty(){//Antrian kosong atau tidak
    if (back == 0)
    {
        return true;
    }else{
        return false;
    }    
}

void enqueueAntrian(string data){//Fungsi menambahkan antrian
    if (isFull())
    {
        cout << "Antrian Penuh" <<endl;
    }else{
        if(isEmpty()){//Kondisi ketika queue kosong
            queueTeller[0] = data;
            front++;
            back++;
        }else{// Antriannya ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian(){//Fungsi mengurangi antrian
    if (isEmpty())
    {
        cout << "Antrian Kosong" <<endl;
    }else {
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = queueTeller[i+1];
        }back--;
    }
}

int countQueue(){//Fungsi untuk menghitung banyak antrian
    return back;
}

void clearQueue(){//Fungsi menghapus semua antrian
    if (isEmpty())
    {
        cout << "Antrian Kosong" <<endl;
    }else{
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue(){
    cout << "Data antrian teller: " <<endl;
    for (int i = 0; i < maksimalQueue; i++)
    {
        if (queueTeller[i] != "")
        {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        }else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main(){
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
}