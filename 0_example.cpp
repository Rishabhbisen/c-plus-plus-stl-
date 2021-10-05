#include <bits/stdc++.h>
using namespace std;

void vec_add(vector<int> &A, int x);

void sort_vec_asse(vector<int> &A);

void reverse_vec(vector<int> &A);

void size_of_vector(vector<int> &A);

void sort_vec_dese(vector<int> &A);
void print_vec(vector<int> &A);

int main()
{
    vector<int> A;
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        while (t--)
        {
            char c;
            cin >> c;
            if (c == 'a')
            {
                int x;
                cin >> x;
                vec_add(A, x);
            }
            if (c == 'b')
            {
                sort_vec_asse(A);
            }
            if (c == 'c')
            {
                reverse_vec(A);
            }
            if (c == 'd')
            {
                cout << A.size() << " ";
            }
            if (c == 'e')
            {
                print_vec(A);
            }
            if (c == 'f')
            {
                sort_vec_dese(A);
            }
        }
        cout << endl;
    }
    return 0;
}