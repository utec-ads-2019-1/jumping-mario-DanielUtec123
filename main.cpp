#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;


    for (int i=0;i<T;i++) {
        int N;
        cin >> N;
        int first,second,number,high = 0,low = 0;

        cin >> first;
        second = first;
        for (int j=1;j<N;j++)
        {
            cin >> number;

            first = second;

            second = number;

            if (first > second){
                low ++;
            }
            if(second > first){
                high ++;
            }


        }

        cout << "Case " << i+1<<": "<<high << " " <<low << endl;
    }

    return 0;
}
