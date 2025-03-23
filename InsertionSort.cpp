#include <iosteream>
using namespace std;

int arr[20]: //Membuat Array dengan panjang data 20
int n; //Membuat Variable inputan n

void input()
{//Procedure Input
    while(true)
    {
        cout<< "Masukkan Jumlah Data pada Array:"; //Membuat Inputan jumlah element Array
        cin>>n; //memanggil variable inputan n

        if (n<=20)
        {//Membuat kondisi n tidak lebih dari 20
            break;
        }
        else{
            cout << "\n Array yang anda masukkan maksimal 20 elemen.\n";//Menampilka pesan jika data lebih dari 20
        }
    }

    cout << endl; //membuat jarak per baris program
    cout << "======================="<<endl; // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" <<endl;
    cout << "=======================" << endl

    for (int i=0; i<n;i++){ //Mengunakan perulangan for untuk menyimpan data pada array
        cout <<"Data ke-" << (i+1) << ": " ; //Memasukkan atau menginputkan nilai data n
        cin<<arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}


void insertionSort(){//Prosedure insertaition sort
    int temp ; //Membuat variable data temporer atau penyimpanan sementara
    int i, j; //Membuat variable j sebagai penanda

    for ( i=1; i<=n-1;i++){//step 1
        temp =arr[i]; //step 2

        j= i-1; //step 3 

        while (j>= 0 && arr[j] > temp) // step4
        {
            arr[j+1] = arr[j] ; //step 4a
            j--; // step 4b
        }
        arr [j+1] = temp; //step 5

    }
}

void display (){
    cout<<endl; // output baris kosong
    cout << "======================="<<endl;
    cout << "Total Pass = " << n-1<<endl;//count element movement
    cout << "======================="<<endl;
    cout << "Element Array yang telah tersusun"<<endl;//output kelayar
    cout << "======================="<<endl;

    for (int j=0;j<n;j++){// Looping dengan j dimulai dari 0 hingga n-1
        cout << arr [j] <<endl; // output kelayar

    }
    cout << endl; // output baris kosong

}

int main(){
    input();
    insertaitionSort();
    display();
    system(("Pause"));
    return 0;
}
