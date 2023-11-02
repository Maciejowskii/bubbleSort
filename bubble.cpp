#include <iostream>

using namespace std;

/* Bubble Sort - sluzy do sortowania liczb w tablicy */
/* parametry: */
/* zwraca posortowana tablice */
/* MT3TP */



int bubble(int *t, int sizeT)
{
    bool swapped = false;
    for (int i= 0; i < sizeT-1; i++){
        if (*(t+i) > *(t+i+1))
        {
            swap(*(t+i), *(t+i+1));
            //cout << *(t + i) << endl;
            swapped = true;
        }
    }
    return swapped;
}

int bubblesort(int *t, int sizeT) {
    while(bubble(t,sizeT));
}

void printT(int *t, int sizeT){
    for(int i = 0; i < sizeT; i++){
        cout << t[i] << " ";
    }
}
int main()
{
    int tab[5] = {8, 4, 23, 5, 7};
    //bubble(tab, 5);
    printT(tab, 5);
    cout << endl;
    bubblesort(tab, 5);
    printT(tab, 5);

    return 0;
}
