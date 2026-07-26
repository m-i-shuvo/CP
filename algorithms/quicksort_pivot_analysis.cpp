#include<iostream> // io library
#include<vector> // dynamic arrray
#include<algorithm> // sort,swap 
#include<cstdlib> // rand(),srand()
#include<ctime> // time() initialization
#include<chrono> // calculate execution time
using namespace std; // std:: cout 
using namespace chrono; // instead of chrono::high_resolution_clock

int partition(vector<int> &arr, int low, int high, int pivotchoice){ // & pass by reference , 
    if(pivotchoice==2){
        swap(arr[low], arr[high]);
    }
    else if(pivotchoice==3){
        int mid = (low+high)/2;
        swap(arr[low], arr[mid]);
    }
    else if(pivotchoice==4){
        int random = low + rand() % (high-low+1);
        swap(arr[low], arr[random]);
    }

    int i=low+1, j=high, pivot=arr[low]; // 0-based idx ,starts from 1 to end

    while(true){
        while(i<=high && arr[i]<=pivot) i++;
        while(j>low && arr[j]>pivot) j--;

        if(i<j){
            swap(arr[i], arr[j]);
        }
        else{
            swap(arr[low], arr[j]);
            break;
        }
    }
    return j;
}

void quicksort(int low, int high, vector<int> &arr, int pivotchoice){
    if(low<high){
        int partitionindex = partition(arr, low, high, pivotchoice);
        quicksort(low, partitionindex-1, arr, pivotchoice);
        quicksort(partitionindex+1, high, arr, pivotchoice);
    }
}

int main(){
    srand(time(0)); //

    for(int n=10; n<=5000; n+=10){
        vector<int> arr1(n), arr2(n), arr3(n), arr4(n);

        double a=0.0, b=0.0, c=0.0, d=0.0;
        int m=10, e=0;

        while(m--){
            vector<int> temp(n);

            for(int i=0;i<n;i++)
                temp[i]=rand();

            // sort(temp.begin(), temp.end());   // Ascending
            sort(temp.rbegin(), temp.rend());    // Descending

            arr1=arr2=arr3=arr4=temp;

            {
                auto start=high_resolution_clock::now();
                quicksort(0, arr1.size()-1, arr1, 1);
                auto stop=high_resolution_clock::now();
                duration<double> s=stop-start;
                a+=s.count();
            }

            {
                auto start=high_resolution_clock::now();
                quicksort(0, arr2.size()-1, arr2, 2);
                auto stop=high_resolution_clock::now();
                duration<double> s=stop-start;
                b+=s.count();
            }

            {
                auto start=high_resolution_clock::now();
                quicksort(0, arr3.size()-1, arr3, 3);
                auto stop=high_resolution_clock::now();
                duration<double> s=stop-start;
                c+=s.count();
            }

            {
                auto start=high_resolution_clock::now();
                quicksort(0, arr4.size()-1, arr4, 4);
                auto stop=high_resolution_clock::now();
                duration<double> s=stop-start;
                d+=s.count();
            }

            e++;
        }

        a/=e; b/=e; c/=e; d/=e;
        cout << a << " " << b << " " << c << " " << d << endl;
    }

    return 0;
}
